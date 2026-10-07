
void FUN_100843e90(byte *param_1,byte *param_2,long param_3,undefined8 param_4,byte *param_5,
                  undefined8 param_6,int param_7,code *param_8)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined7 uStack_67;
  undefined1 local_60;
  undefined7 uStack_5f;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_3 != 0) {
    if (param_7 == 0) {
      do {
        local_60 = (undefined1)*(undefined8 *)(param_5 + 8);
        uStack_5f = (undefined7)((ulong)*(undefined8 *)(param_5 + 8) >> 8);
        uStack_67 = (undefined7)((ulong)*(undefined8 *)param_5 >> 8);
        (*param_8)(param_5,param_5,param_4);
        bVar1 = *param_1;
        *param_2 = bVar1 ^ *param_5;
        *(ulong *)(param_5 + 8) = CONCAT17(bVar1,uStack_5f);
        *(ulong *)param_5 = CONCAT17(local_60,uStack_67);
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      do {
        local_60 = (undefined1)*(undefined8 *)(param_5 + 8);
        uStack_5f = (undefined7)((ulong)*(undefined8 *)(param_5 + 8) >> 8);
        uStack_67 = (undefined7)((ulong)*(undefined8 *)param_5 >> 8);
        (*param_8)(param_5,param_5,param_4);
        bVar1 = *param_5;
        bVar2 = *param_1;
        *param_2 = bVar1 ^ bVar2;
        *(ulong *)(param_5 + 8) = CONCAT17(bVar1 ^ bVar2,uStack_5f);
        *(ulong *)param_5 = CONCAT17(local_60,uStack_67);
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != lVar3) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

