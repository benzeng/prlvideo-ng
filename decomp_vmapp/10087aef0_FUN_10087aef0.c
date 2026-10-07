
undefined4
FUN_10087aef0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,int param_5,
             int param_6)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_50 [8];
  
  FUN_10081d010(9,0x1e,"eng_table.c",0x8a);
  if (*param_1 == 0) {
    lVar2 = FUN_1008856e0(FUN_10087b490,FUN_10087b4a0);
    uVar4 = 0;
    if (lVar2 == 0) goto LAB_10087b12f;
    *param_1 = lVar2;
    FUN_1008798a0(param_2);
  }
  if (param_5 != 0) {
    if (param_6 == 0) {
      do {
        local_50[0] = *param_4;
        puVar3 = (undefined4 *)FUN_100885dc0(*param_1,local_50);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)FUN_10081ddd0(0x20,"eng_table.c",0x96);
          uVar4 = 0;
          if (puVar3 == (undefined4 *)0x0) goto LAB_10087b12f;
          puVar3[6] = 1;
          *puVar3 = *param_4;
          lVar2 = FUN_100884e10();
          *(long *)(puVar3 + 2) = lVar2;
          if (lVar2 == 0) goto LAB_10087b17f;
          *(undefined8 *)(puVar3 + 4) = 0;
          FUN_1008859e0(*param_1,puVar3);
        }
        FUN_100884f70(*(undefined8 *)(puVar3 + 2),param_3);
        iVar1 = FUN_1008852e0(*(undefined8 *)(puVar3 + 2),param_3);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_10087b12f;
        puVar3[6] = 0;
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    else {
      do {
        local_50[0] = *param_4;
        puVar3 = (undefined4 *)FUN_100885dc0(*param_1,local_50);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)FUN_10081ddd0(0x20,"eng_table.c",0x96);
          uVar4 = 0;
          if (puVar3 == (undefined4 *)0x0) goto LAB_10087b12f;
          puVar3[6] = 1;
          *puVar3 = *param_4;
          lVar2 = FUN_100884e10();
          *(long *)(puVar3 + 2) = lVar2;
          if (lVar2 == 0) goto LAB_10087b17f;
          *(undefined8 *)(puVar3 + 4) = 0;
          FUN_1008859e0(*param_1,puVar3);
        }
        FUN_100884f70(*(undefined8 *)(puVar3 + 2),param_3);
        iVar1 = FUN_1008852e0(*(undefined8 *)(puVar3 + 2),param_3);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_10087b12f;
        puVar3[6] = 0;
        iVar1 = FUN_10087a410(param_3);
        if (iVar1 == 0) {
          FUN_100887ce0(0x26,0xb8,0x6d,"eng_table.c",0xaf);
          goto LAB_10087b12f;
        }
        if (*(long *)(puVar3 + 4) != 0) {
          FUN_10087a460(*(long *)(puVar3 + 4),0);
        }
        *(undefined8 *)(puVar3 + 4) = param_3;
        puVar3[6] = 1;
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  uVar4 = 1;
  goto LAB_10087b12f;
LAB_10087b17f:
  FUN_10081e1a0(puVar3);
  uVar4 = 0;
LAB_10087b12f:
  FUN_10081d010(10,0x1e,"eng_table.c",0xbb);
  return uVar4;
}

