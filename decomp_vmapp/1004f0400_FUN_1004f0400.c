
undefined8 * FUN_1004f0400(undefined8 *param_1)

{
  QArrayData *pQVar1;
  ulong uVar2;
  undefined4 *puVar3;
  QArrayData *local_40;
  undefined1 local_32;
  
  *param_1 = PTR_shared_null_100ba2188;
  puVar3 = &DAT_100b45470;
  uVar2 = 0;
  do {
    FUN_1004f0330(&local_40,*puVar3);
    pQVar1 = local_40;
    if (*(int *)(local_40 + 4) != 0) {
      FUN_10000c490(param_1,&local_40);
    }
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_32 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_1004f0482;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_1004f0482:
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    if (5 < uVar2) {
      return param_1;
    }
  } while( true );
}

