
void FUN_100ad2030(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  cVar3 = FUN_100acadf0(param_1[2],1);
  if (cVar3 == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  cVar3 = FUN_100ad28b0(param_1,0);
  if (cVar3 == '\0') {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                  "CoherenceToolClient: New display configuration is invalid. Guest configuration \t\t\t will not ne changed. Continue working with previous display configuration."
                 );
    return;
  }
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                  "Change display configuration because of HiResolution options have changed");
  }
  FUN_100ad3070(&local_38,param_1);
  FUN_100acb230(param_1[2],2,local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4));
  FUN_100ad3450(&local_40,param_1,param_1 + 0x132);
  puVar2 = PTR_shared_null_1021e15e8;
  local_48 = PTR_shared_null_1021e15e8;
  FUN_100ad31f0(param_1,&local_40,&local_48);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ad2163;
    }
    iVar1 = *(int *)(puVar2 + 0xc);
    if (iVar1 != *(int *)(puVar2 + 8)) {
      lVar5 = (long)*(int *)(puVar2 + 8) * 8 + (long)iVar1 * -8;
      puVar4 = (undefined8 *)(puVar2 + (long)iVar1 * 8 + 8);
      do {
        if ((void *)*puVar4 != (void *)0x0) {
          operator_delete((void *)*puVar4);
        }
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
LAB_100ad2163:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ad2193;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100ad2193:
  FUN_100ade660(param_1[0x14b],0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return;
}

