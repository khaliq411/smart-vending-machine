@Serializable
data class VendingRequest(
    val id: Long = 0,
    @SerialName("item_id") val itemId: Int,
    @SerialName("machine_id") val machineId: String,
    @SerialName("status") val status: String? = "pending", 
    @SerialName("spin_duration") val spinDuration: Int = 8000
)

// Sends vending request to cloud database
suspend fun createVendingRequest(itemId: Int, machineId: String, spinDuration: Int) {
    val request = VendingRequest(itemId, machineId, "pending", spinDuration)

    SupabaseModule.client
        .from("vending_requests")
        .insert(request)
}
