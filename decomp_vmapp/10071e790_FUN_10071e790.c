
char * FUN_10071e790(void)

{
  char *pcVar1;
  
  if (DAT_1011bdc34 != '\0') {
    return &DAT_1011bdc34;
  }
  if (DAT_1011bdc30 == 0) {
    return "OK";
  }
  if (DAT_1011bdc30 == 2) {
    return "Invalid HWID";
  }
  if (DAT_1011bdc30 == 1) {
    return "Invalid license";
  }
  if (DAT_1011bdc30 == -1) {
    return "Fatal error";
  }
  if (DAT_1011bdc30 == -2) {
    return "No enough memory";
  }
  if (DAT_1011bdc30 == -3) {
    return "Invalid parameter";
  }
  if (DAT_1011bdc30 == -4) {
    return "I/O error";
  }
  if (DAT_1011bdc30 == -5) {
    return "Entry already exist";
  }
  if (DAT_1011bdc30 == -6) {
    return "Library not initialized";
  }
  if (DAT_1011bdc30 == -7) {
    return "License does not exist";
  }
  if (DAT_1011bdc30 == -8) {
    return "Access denied";
  }
  if (DAT_1011bdc30 == -9) {
    return "Resource locked";
  }
  if (DAT_1011bdc30 == -10) {
    return "Error on KA server";
  }
  if (DAT_1011bdc30 == -0xb) {
    return "No data";
  }
  if (DAT_1011bdc30 == -0xc) {
    return "Wrong license";
  }
  if (DAT_1011bdc30 == -0xd) {
    return "Operation does not supported for this object";
  }
  if (DAT_1011bdc30 == -0xe) {
    return "Network error";
  }
  if (DAT_1011bdc30 == -0xf) {
    return "HTTP Proxy error";
  }
  if (DAT_1011bdc30 == -0x10) {
    return "HTTP Proxy authentication required";
  }
  if (DAT_1011bdc30 == -0x12) {
    return "Timeout expired";
  }
  pcVar1 = "Unknown error";
  if (DAT_1011bdc30 == -0x11) {
    pcVar1 = "Operation was cancelled";
  }
  return pcVar1;
}

