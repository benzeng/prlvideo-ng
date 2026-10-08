
void FUN_100ac1440(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  uint uVar4;
  bool bVar5;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined8 local_68;
  long local_60;
  long *local_58;
  long *local_50;
  uint local_48;
  undefined *local_40;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_1021e15e8;
  FUN_100095510(&local_60,param_4);
  local_58 = (long *)(local_60 + 0x10 + (long)*(int *)(local_60 + 8) * 8);
  local_50 = (long *)(local_60 + 0x10 + (long)*(int *)(local_60 + 0xc) * 8);
  local_48 = 1;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      puVar1 = (undefined8 *)*local_58;
      pQVar2 = (QArrayData *)*puVar1;
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      pQVar3 = (QArrayData *)puVar1[1];
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      local_68 = puVar1[2];
      local_78 = pQVar2;
      local_70 = pQVar3;
      if (local_48 != 0) {
        if (-1 < (int)local_68) {
          FUN_1000341d0(&local_40,&local_78);
        }
        local_48 = 0;
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ac153b;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_100ac153b:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ac1566;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_100ac1566:
      local_58 = local_58 + 1;
      uVar4 = local_48 ^ 1;
      bVar5 = local_48 != 1;
      local_48 = uVar4;
    } while ((bVar5) && (local_58 != local_50));
  }
  FUN_1000f1a40(&local_60);
  FUN_100ac1210(param_1,param_2,param_3,&local_40,param_5);
  FUN_100036370(&local_40);
  return;
}

