
void _xmlNanoHTTPInit(void)

{
  char *pcVar1;
  
  if (DAT_1011b7ea8 == 0) {
    if (DAT_1011b7eb0 == 0) {
      DAT_1011b7eb8 = 0x50;
      pcVar1 = _getenv("no_proxy");
      if (((pcVar1 == (char *)0x0) || (*pcVar1 != '*')) || (pcVar1[1] != '\0')) {
        pcVar1 = _getenv("http_proxy");
        if (pcVar1 == (char *)0x0) {
          pcVar1 = _getenv("HTTP_PROXY");
          if (pcVar1 != (char *)0x0) {
            _xmlNanoHTTPScanProxy(pcVar1);
          }
        }
        else {
          _xmlNanoHTTPScanProxy(pcVar1);
        }
      }
    }
    DAT_1011b7ea8 = 1;
  }
  return;
}

