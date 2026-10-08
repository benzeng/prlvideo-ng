
undefined4 FUN_100904d55(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  void *pvVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  undefined4 local_34;
  
  if (param_1 == 0) {
    local_34 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x30) == 0) {
    local_34 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x10) == 0) {
    _xmlRMutexLock(DAT_102312c98);
    if (*(long *)(param_1 + 0x10) == 0) {
      if (DAT_102312c88 != (xmlHashTablePtr)0x0) {
        pvVar3 = _xmlHashLookup(DAT_102312c88,*(xmlChar **)(param_1 + 0x30));
        if (pvVar3 != (void *)0x0) {
          if (DAT_102312c80 != 0) {
            ppxVar4 = ___xmlGenericError();
            pxVar1 = *ppxVar4;
            uVar2 = *(undefined8 *)(param_1 + 0x30);
            ppvVar5 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar5,"Found %s in file hash\n",uVar2);
          }
          if (*(int *)(param_1 + 0x18) == 1) {
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)((long)pvVar3 + 0x10);
          }
          else {
            *(void **)(param_1 + 0x10) = pvVar3;
          }
          *(undefined4 *)(param_1 + 0x3c) = 0;
          _xmlRMutexUnlock(DAT_102312c98);
          return 0;
        }
        if (DAT_102312c80 != 0) {
          ppxVar4 = ___xmlGenericError();
          pxVar1 = *ppxVar4;
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar5,"%s not found in file hash\n",uVar2);
        }
      }
      pvVar3 = (void *)FUN_100904ad0(*(undefined4 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30)
                                    );
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)(param_1 + 0x18) = 2;
        _xmlRMutexUnlock(DAT_102312c98);
        local_34 = 0xffffffff;
      }
      else {
        if (*(int *)(param_1 + 0x18) == 1) {
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)((long)pvVar3 + 0x10);
        }
        else {
          *(void **)(param_1 + 0x10) = pvVar3;
        }
        *(undefined4 *)((long)pvVar3 + 0x3c) = 1;
        if (DAT_102312c88 == (xmlHashTablePtr)0x0) {
          DAT_102312c88 = _xmlHashCreate(10);
        }
        if (DAT_102312c88 != (xmlHashTablePtr)0x0) {
          if (DAT_102312c80 != 0) {
            ppxVar4 = ___xmlGenericError();
            pxVar1 = *ppxVar4;
            uVar2 = *(undefined8 *)(param_1 + 0x30);
            ppvVar5 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar5,"%s added to file hash\n",uVar2);
          }
          _xmlHashAddEntry(DAT_102312c88,*(xmlChar **)(param_1 + 0x30),pvVar3);
        }
        _xmlRMutexUnlock(DAT_102312c98);
        local_34 = 0;
      }
    }
    else {
      _xmlRMutexUnlock(DAT_102312c98);
      local_34 = 0;
    }
  }
  else {
    local_34 = 0xffffffff;
  }
  return local_34;
}

