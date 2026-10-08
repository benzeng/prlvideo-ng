
void _xmlNanoFTPInit(void)

{
  char *pcVar1;
  
  if (DAT_102312c40 == 0) {
    DAT_102312c50 = 0x15;
    pcVar1 = _getenv("no_proxy");
    if (((pcVar1 == (char *)0x0) || (*pcVar1 != '*')) || (pcVar1[1] != '\0')) {
      pcVar1 = _getenv("ftp_proxy");
      if (pcVar1 == (char *)0x0) {
        pcVar1 = _getenv("FTP_PROXY");
        if (pcVar1 != (char *)0x0) {
          _xmlNanoFTPScanProxy(pcVar1);
        }
      }
      else {
        _xmlNanoFTPScanProxy(pcVar1);
      }
      pcVar1 = _getenv("ftp_proxy_user");
      if (pcVar1 != (char *)0x0) {
        DAT_102312c58 = (*(code *)_xmlMemStrdup)(pcVar1);
      }
      pcVar1 = _getenv("ftp_proxy_password");
      if (pcVar1 != (char *)0x0) {
        DAT_102312c60 = (*(code *)_xmlMemStrdup)(pcVar1);
      }
      DAT_102312c40 = 1;
    }
  }
  return;
}

