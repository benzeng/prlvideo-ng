
undefined8 FUN_100305450(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  Data *pDVar2;
  uint uVar3;
  Data *pDVar4;
  long lVar5;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  if (param_3 < 0x3bf3) {
    if (param_3 < 0x3ae2) {
      if (param_3 < 0x36bd) {
        if (param_3 == -0x7fff7fff) {
LAB_10030559a:
          local_48 = 1;
          FUN_100314410(&local_38,&local_48);
          local_4c = 2;
          FUN_100314410(&local_38,&local_4c);
          FUN_100314710(param_1,&local_38);
          goto LAB_1003056c7;
        }
        if (param_3 == 0x32ca) {
LAB_100305539:
          local_3c = 1;
          FUN_100314410(&local_38,&local_3c);
          local_40 = 2;
          FUN_100314410(&local_38,&local_40);
          local_44 = 3;
          FUN_100314410(&local_38,&local_44);
          FUN_100314710(param_1,&local_38);
          goto LAB_1003056c7;
        }
      }
      else {
        if (param_3 - 0x36e7U < 3) goto LAB_10030559a;
        if (param_3 - 0x36bdU < 2) goto LAB_100305539;
      }
    }
    else if (param_3 < 0x3af5) {
      if (param_3 == 0x3ae2) goto LAB_10030559a;
    }
    else if (param_3 < 0x3b18) {
      if (param_3 == 0x3af5) goto LAB_10030559a;
      if (param_3 == 0x3b0f) {
        local_54 = 2;
        FUN_100314410(&local_38,&local_54);
        FUN_100314710(param_1,&local_38);
        goto LAB_1003056c7;
      }
    }
    else {
      if (param_3 == 0x3b18) goto LAB_100305689;
      if (param_3 == 0x3b26) {
        local_50 = 2;
        FUN_100314410(&local_38,&local_50);
        FUN_100314710(param_1,&local_38);
        goto LAB_1003056c7;
      }
    }
  }
  else if (param_3 < 0x3c4b) {
    uVar3 = param_3 - 0x3bf3;
    if (uVar3 < 0x38) {
      if ((0x98004000000000U >> ((ulong)uVar3 & 0x3f) & 1) != 0) goto LAB_100305689;
      if ((3UL >> ((ulong)uVar3 & 0x3f) & 1) != 0) goto LAB_10030559a;
    }
  }
  else if (param_3 < 0x3c59) {
    if (param_3 == 0x3c4b) goto LAB_10030559a;
  }
  else if (param_3 < 0x3c78) {
    if (param_3 == 0x3c59) {
      local_60 = 1;
      FUN_100314410(&local_38,&local_60);
      FUN_100314710(param_1,&local_38);
      goto LAB_1003056c7;
    }
    if (param_3 == 0x3c61) goto LAB_100305689;
  }
  else if ((param_3 == 0x3c78) || (param_3 == 0x3c80)) {
LAB_100305689:
    local_58 = 0;
    FUN_100314410(&local_38,&local_58);
    local_5c = 1;
    FUN_100314410(&local_38,&local_5c);
    FUN_100314710(param_1,&local_38);
    goto LAB_1003056c7;
  }
  CMessageDataProvider::getPossibleDefaultButtons((int)param_1);
LAB_1003056c7:
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar5 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return param_1;
}

