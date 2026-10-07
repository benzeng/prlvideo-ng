
bool FUN_10079cce0(long param_1,undefined2 *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  QMutex::lock();
  *(undefined1 *)(param_2 + 0x2024) = 0;
  if (*(int *)(param_1 + 0xa0) == 1) {
    if (*(long *)(param_1 + 0x328) == 0) {
      bVar4 = false;
    }
    else {
      iVar3 = FUN_10080ee80();
      if (iVar3 == 3) {
        lVar1 = *(long *)(param_1 + 0x328);
        *(undefined4 *)(param_2 + 0x2022) = *(undefined4 *)(lVar1 + 0x38);
        cVar2 = FUN_1007ebf70(lVar1,param_2,param_2 + 0x21,0x4000);
        *(char *)(param_2 + 0x2024) = cVar2;
        if (cVar2 == '\0') {
          FUN_1008e3970("","IOCommunication",0,
                        "Cannot serialize OpenSSL session state (required %u bytes for ASN)",
                        *param_2);
        }
      }
      bVar4 = *(char *)(param_2 + 0x2024) != '\0';
    }
  }
  else {
    bVar4 = false;
  }
  QMutex::unlock();
  return bVar4;
}

