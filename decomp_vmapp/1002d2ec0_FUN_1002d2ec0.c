
void FUN_1002d2ec0(long param_1,uint *param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  uVar2 = 2;
  param_4 = param_4 & 0xff;
  do {
    if ((*param_2 >> (uVar2 & 0x1f) & 1) != 0) {
      FUN_1002d2ca0(param_1,param_4,uVar2 & 0xff,0);
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[XHC] DROP:%d",uVar2);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x1f);
  puVar4 = (undefined4 *)(param_4 * 0x510 + 0x164c + param_1);
  uVar2 = 1;
  lVar3 = 0;
  do {
    if ((param_2[1] >> (uVar2 & 0x1f) & 1) != 0) {
      *(undefined8 *)(param_3 + 0x38 + lVar3) = *(undefined8 *)((long)param_2 + lVar3 + 0x58);
      *(undefined8 *)(param_3 + 0x30 + lVar3) = *(undefined8 *)((long)param_2 + lVar3 + 0x50);
      uVar1 = *(undefined8 *)((long)param_2 + lVar3 + 0x40);
      *(undefined8 *)(param_3 + 0x28 + lVar3) = *(undefined8 *)((long)param_2 + lVar3 + 0x48);
      *(undefined8 *)(param_3 + 0x20 + lVar3) = uVar1;
      *(ulong *)(puVar4 + -5) = *(ulong *)(param_3 + 0x28 + lVar3) & 0xfffffffffffffff0;
      *(byte *)(puVar4 + -1) = *(byte *)(puVar4 + -1) & 0xfe | *(byte *)(param_3 + 0x28 + lVar3) & 1
      ;
      *puVar4 = 0x1000000;
      FUN_1002d2ca0(param_1,param_4,uVar2 & 0xff,1);
      if (1 < DAT_1011c568c) {
        uVar1 = FUN_1002da3a0(param_3 + 0x20 + lVar3);
        FUN_1008e3970("","USB",0,"[XHC] ADD:%d %s",uVar2,uVar1);
      }
    }
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 10;
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x3e0);
  return;
}

