
void _xmlNanoHTTPInit(void)

{
  char *pcVar1;
  
  if (DAT_102312c28 == 0) {
    if (DAT_102312c30 == 0) {
      DAT_102312c38 = 0x50;
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
    DAT_102312c28 = 1;
  }
  return;
}

