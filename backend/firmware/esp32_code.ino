// Fetch pending requests from cloud and trigger motor
void checkPendingRequests() {
    HTTPClient http;

    http.begin("https://YOUR_SUPABASE_URL/rest/v1/vending_requests?status=eq.pending&machine_id=eq.VM001");
    http.addHeader("apikey", "YOUR_API_KEY");

    int httpResponseCode = http.GET();

    if (httpResponseCode == 200) {
        String jsonPayload = http.getString();

        int spinDuration = parseJsonForSpinDuration(jsonPayload); 

        digitalWrite(MOTOR_RELAY_PIN, HIGH);
        delay(spinDuration);
        digitalWrite(MOTOR_RELAY_PIN, LOW);

        markRequestAsDoneInCloud(); 
    }

    http.end();
}
