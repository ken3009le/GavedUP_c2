#include "upload.h"

int main() {
    const char* content = "Kenzema owns this log.";
    upload_result_to_github(content, "log_001.txt");
    return 0;
}
