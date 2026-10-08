
undefined1 FUN_100b23830(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  long local_48 [2];
  QArrayData *local_38;
  undefined1 local_21;
  
  uVar5 = 1;
  if (*(int *)((long)param_1 + 0x14) != 1) {
    if (*(int *)((long)param_1 + 0x14) == -1) {
      uVar5 = 0;
    }
    else {
      local_38 = (QArrayData *)PTR_shared_null_1021e1288;
      iVar2 = (**(code **)(*(long *)((long)param_2 + *(long *)(*param_2 + -0x18)) + 0x38))
                        ((long)param_2 + *(long *)(*param_2 + -0x18),local_48);
      if (iVar2 < 0) {
        uVar5 = 0;
      }
      else if (param_1[1] == 0) {
        uVar4 = (ulong)*(uint *)(param_2[4] + 0x10);
        uVar1 = local_48[0] + -1 + uVar4;
        lVar3 = FUN_100ddc350(uVar1 / uVar4 & 0xffffffff,uVar4,uVar1 % uVar4);
        param_1[1] = lVar3;
        if (lVar3 == 0) {
          FUN_100df99c0("Compact","dimg",0,"Error: Map allocation out of memory");
          *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
          uVar5 = 0;
        }
        else {
          FUN_100ddc470(lVar3);
          uVar5 = 1;
          if (3 < DAT_10230ffd0) {
            FUN_100df99c0("Compact","dimg",4,"[%p] UsedBlocksMap created",*param_1);
          }
        }
      }
      else {
        FUN_100ddc470();
        *(undefined4 *)(param_1 + 4) = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        uVar5 = 1;
        if (3 < DAT_10230ffd0) {
          FUN_100df99c0("Compact","dimg",4,"[%p] UsedBlocksMap resetted",*param_1);
        }
      }
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (*(int *)local_38 != 0) {
            return uVar5;
          }
          local_21 = 0;
        }
        QArrayData::deallocate(local_38,2,8);
      }
    }
  }
  return uVar5;
}

