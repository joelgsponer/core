#pragma once

////////// Private Settings \\\\\\\\\\

// Do NOT share the data of "Private Settings" section with anybody!!!

#define OPERATOR "PGIYMURTXAWAZCEEGFZEBLHQJKACVRNRLKGRWRYUBGDYLXYPPBXGLJKFNFXC"

static unsigned char computorSeeds[][55 + 1] = {
    "sbotuvoktsybmibswricgnpuixjaemrhcmludcpsyrvfrvlwvnevoer",
};

// Enter static IPs of peers (ideally at least 4 including your own IP) to disseminate them to other peers.
// You can find current peer IPs at https://app.qubic.li/network/live
static const unsigned char knownPublicPeers[][4] = {
    {109, 230, 239, 139}, 
    {109, 230, 239, 74},
    {185, 70, 186, 147},
    {185, 70, 186, 149},
    {185, 70, 186, 153},
    {66, 248, 204, 30},
    {185, 130, 227, 82},
    {169, 254, 0, 18}
};

#define LOG_BUFFER_SIZE 16777200 // Must be less or equal to 16777200
#define LOG_QU_TRANSFERS 0 // "0" disables logging, "1" enables it
#define LOG_QU_TRANSFERS_TRACK_TRANSFER_ID 0
#define LOG_ASSET_ISSUANCES 0
#define LOG_ASSET_OWNERSHIP_CHANGES 0
#define LOG_ASSET_POSSESSION_CHANGES 0
#define LOG_CONTRACT_ERROR_MESSAGES 0
#define LOG_CONTRACT_WARNING_MESSAGES 0
#define LOG_CONTRACT_INFO_MESSAGES 0
#define LOG_CONTRACT_DEBUG_MESSAGES 0
#define LOG_BURNINGS 0
#define LOG_CUSTOM_MESSAGES 0
static unsigned long long logReaderPasscodes[][4] = {
    {0, 0, 0, 0}, // REMOVE THIS ENTRY AND REPLACE IT WITH YOUR OWN RANDOM NUMBERS IN [0..18446744073709551615] RANGE IF LOGGING IS ENABLED
};