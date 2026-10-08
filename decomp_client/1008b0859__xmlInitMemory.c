
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlInitMemory(void)

{
  char *pcVar1;
  int local_1c;
  
  if (DAT_102312880 == 0) {
    DAT_102312880 = 1;
    DAT_1023128a0 = _xmlNewMutex();
    pcVar1 = _getenv("XML_MEM_BREAKPOINT");
    if (pcVar1 != (char *)0x0) {
      _sscanf(pcVar1,"%ud",&DAT_1023128ac);
    }
    pcVar1 = _getenv("XML_MEM_TRACE");
    if (pcVar1 != (char *)0x0) {
      _sscanf(pcVar1,"%p",&DAT_1023128b0);
    }
    local_1c = 0;
  }
  else {
    local_1c = -1;
  }
  return local_1c;
}

