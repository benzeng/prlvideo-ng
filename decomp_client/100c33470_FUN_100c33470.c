
undefined4 * FUN_100c33470(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_100bf2780(5,param_2,"bn_mont.c",0x20f);
  puVar3 = (undefined4 *)*param_1;
  FUN_100bf2780(6,param_2 & 0xffffffff,"bn_mont.c",0x211);
  if (puVar3 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_100bf3540(0x68,"bn_mont.c",0x155);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      FUN_100c26700();
      puVar3 = puVar2 + 8;
      FUN_100c26700(puVar3);
      puVar4 = puVar2 + 0xe;
      FUN_100c26700(puVar4);
      *(undefined8 *)(puVar2 + 0x16) = 0;
      *(undefined8 *)(puVar2 + 0x14) = 0;
      puVar2[0x18] = 1;
      iVar1 = FUN_100c331e0(puVar2,param_3,param_4);
      if (iVar1 == 0) {
        FUN_100c26640(puVar2 + 2);
        FUN_100c26640(puVar3);
        FUN_100c26640(puVar4);
        puVar3 = (undefined4 *)0x0;
        if ((*(byte *)(puVar2 + 0x18) & 1) != 0) {
          FUN_100bf3910(puVar2);
          puVar3 = (undefined4 *)0x0;
        }
      }
      else {
        FUN_100bf2780(9,param_2 & 0xffffffff,"bn_mont.c",0x226);
        if (*param_1 == 0) {
          *param_1 = (long)puVar2;
        }
        else {
          FUN_100c26640(puVar2 + 2);
          FUN_100c26640(puVar3);
          FUN_100c26640(puVar4);
          if ((*(byte *)(puVar2 + 0x18) & 1) != 0) {
            FUN_100bf3910(puVar2);
          }
          puVar2 = (undefined4 *)*param_1;
        }
        FUN_100bf2780(10,param_2 & 0xffffffff,"bn_mont.c",0x22c);
        puVar3 = puVar2;
      }
    }
  }
  return puVar3;
}

