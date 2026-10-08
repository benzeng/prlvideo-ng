
undefined4
FUN_100c560f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,int param_5,
             int param_6)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_50 [8];
  
  FUN_100bf2780(9,0x1e,"eng_table.c",0x8a);
  if (*param_1 == 0) {
    lVar2 = FUN_100c608e0(FUN_100c56690,FUN_100c566a0);
    uVar4 = 0;
    if (lVar2 == 0) goto LAB_100c5632f;
    *param_1 = lVar2;
    FUN_100c54aa0(param_2);
  }
  if (param_5 != 0) {
    if (param_6 == 0) {
      do {
        local_50[0] = *param_4;
        puVar3 = (undefined4 *)FUN_100c60fc0(*param_1,local_50);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)FUN_100bf3540(0x20,"eng_table.c",0x96);
          uVar4 = 0;
          if (puVar3 == (undefined4 *)0x0) goto LAB_100c5632f;
          puVar3[6] = 1;
          *puVar3 = *param_4;
          lVar2 = FUN_100c60010();
          *(long *)(puVar3 + 2) = lVar2;
          if (lVar2 == 0) goto LAB_100c5637f;
          *(undefined8 *)(puVar3 + 4) = 0;
          FUN_100c60be0(*param_1,puVar3);
        }
        FUN_100c60170(*(undefined8 *)(puVar3 + 2),param_3);
        iVar1 = FUN_100c604e0(*(undefined8 *)(puVar3 + 2),param_3);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_100c5632f;
        puVar3[6] = 0;
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    else {
      do {
        local_50[0] = *param_4;
        puVar3 = (undefined4 *)FUN_100c60fc0(*param_1,local_50);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)FUN_100bf3540(0x20,"eng_table.c",0x96);
          uVar4 = 0;
          if (puVar3 == (undefined4 *)0x0) goto LAB_100c5632f;
          puVar3[6] = 1;
          *puVar3 = *param_4;
          lVar2 = FUN_100c60010();
          *(long *)(puVar3 + 2) = lVar2;
          if (lVar2 == 0) goto LAB_100c5637f;
          *(undefined8 *)(puVar3 + 4) = 0;
          FUN_100c60be0(*param_1,puVar3);
        }
        FUN_100c60170(*(undefined8 *)(puVar3 + 2),param_3);
        iVar1 = FUN_100c604e0(*(undefined8 *)(puVar3 + 2),param_3);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_100c5632f;
        puVar3[6] = 0;
        iVar1 = FUN_100c55610(param_3);
        if (iVar1 == 0) {
          FUN_100c62ee0(0x26,0xb8,0x6d,"eng_table.c",0xaf);
          goto LAB_100c5632f;
        }
        if (*(long *)(puVar3 + 4) != 0) {
          FUN_100c55660(*(long *)(puVar3 + 4),0);
        }
        *(undefined8 *)(puVar3 + 4) = param_3;
        puVar3[6] = 1;
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  uVar4 = 1;
  goto LAB_100c5632f;
LAB_100c5637f:
  FUN_100bf3910(puVar3);
  uVar4 = 0;
LAB_100c5632f:
  FUN_100bf2780(10,0x1e,"eng_table.c",0xbb);
  return uVar4;
}

