
void FUN_100a39dc0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  Data *local_48;
  ulong local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  uVar6 = 0;
  if ((lVar5 != 0) && (uVar1 = FUN_10015d3a0(lVar5), 0 < (int)uVar1)) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar4 = FUN_10015d330(lVar5,uVar6);
      iVar3 = FUN_10018f860(uVar4);
      if (iVar3 == 8) {
        uVar8 = uVar6;
      }
      iVar2 = (uint)(iVar3 == 8) + iVar2;
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar7;
    } while (uVar1 != uVar7);
    uVar6 = 0;
    if (iVar2 == 1) {
      uVar6 = FUN_10015d330(lVar5,uVar8);
    }
  }
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = uVar6;
  FUN_10012c6e0(&local_48,&local_40);
  FUN_100a39ef0(param_1,&local_48,param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_48);
  }
  return;
}

