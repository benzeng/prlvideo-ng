
undefined8 FUN_1000c80f0(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                  "SerializationApp.cpp",0x5aa,"stateMemcopy");
    lVar3 = *(long *)(param_1 + 0x50);
  }
  iVar1 = *(int *)(lVar3 + 0x14);
  if ((iVar1 == 5) || (iVar1 == 3)) {
    cVar2 = FUN_1000d5f90(param_1 + 0x208);
    if (cVar2 != '\0') goto LAB_1000c8186;
  }
  else {
    if (iVar1 != 1) {
      *(undefined4 *)(param_1 + 500) = 0x80020000;
      goto LAB_1000c81aa;
    }
LAB_1000c8186:
    cVar2 = FUN_1000d5b80(param_1 + 0x208);
    if (cVar2 != '\0') goto LAB_1000c81aa;
  }
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x21c);
LAB_1000c81aa:
  if (*(char *)(param_1 + 0x449) == '\0') {
    FUN_10008fdb0(*(undefined8 *)(param_1 + 0x2b0),0x4e45,0);
  }
  *(undefined1 *)(param_1 + 0x449) = 0;
  FUN_1000cee20(param_1);
  FUN_10008ec80(param_1,0);
  return 1;
}

