
undefined8 * FUN_10087a0f0(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  
  if (param_1 == (char *)0x0) {
    FUN_100887ce0(0x26,0x6a,0x43,"eng_list.c",0x14a);
  }
  else {
    FUN_10081d010(9,0x1e,"eng_list.c",0x14d);
    for (puVar8 = DAT_1011c0880; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)puVar8[0x1a]) {
      iVar5 = _strcmp(param_1,(char *)*puVar8);
      if (iVar5 == 0) {
        if ((*(byte *)(puVar8 + 0x15) & 4) == 0) {
          *(int *)((long)puVar8 + 0xac) = *(int *)((long)puVar8 + 0xac) + 1;
          puVar6 = puVar8;
        }
        else {
          puVar6 = (undefined8 *)FUN_1008796b0();
          if (puVar6 == (undefined8 *)0x0) break;
          uVar4 = puVar8[1];
          *puVar6 = *puVar8;
          puVar6[1] = uVar4;
          uVar4 = puVar8[3];
          puVar6[2] = puVar8[2];
          puVar6[3] = uVar4;
          uVar4 = puVar8[5];
          puVar6[4] = puVar8[4];
          puVar6[5] = uVar4;
          uVar4 = puVar8[7];
          puVar6[6] = puVar8[6];
          puVar6[7] = uVar4;
          uVar4 = puVar8[9];
          puVar6[8] = puVar8[8];
          puVar6[9] = uVar4;
          uVar4 = puVar8[0xb];
          puVar6[10] = puVar8[10];
          puVar6[0xb] = uVar4;
          uVar4 = puVar8[0xe];
          puVar6[0xd] = puVar8[0xd];
          puVar6[0xe] = uVar4;
          uVar4 = puVar8[0x10];
          puVar6[0xf] = puVar8[0xf];
          puVar6[0x10] = uVar4;
          uVar1 = *(undefined4 *)((long)puVar8 + 0x8c);
          uVar2 = *(undefined4 *)(puVar8 + 0x12);
          uVar3 = *(undefined4 *)((long)puVar8 + 0x94);
          *(undefined4 *)(puVar6 + 0x11) = *(undefined4 *)(puVar8 + 0x11);
          *(undefined4 *)((long)puVar6 + 0x8c) = uVar1;
          *(undefined4 *)(puVar6 + 0x12) = uVar2;
          *(undefined4 *)((long)puVar6 + 0x94) = uVar3;
          puVar6[0x14] = puVar8[0x14];
          *(undefined4 *)(puVar6 + 0x15) = *(undefined4 *)(puVar8 + 0x15);
        }
        FUN_10081d010(10,0x1e,"eng_list.c",0x164);
        return puVar6;
      }
    }
    FUN_10081d010(10,0x1e,"eng_list.c",0x164);
    iVar5 = _strcmp(param_1,"dynamic");
    puVar8 = (undefined8 *)0x0;
    if (iVar5 != 0) {
      pcVar7 = _getenv("OPENSSL_ENGINES");
      pcVar9 = "/usr/local/ssl/lib/engines";
      if (pcVar7 != (char *)0x0) {
        pcVar9 = pcVar7;
      }
      puVar6 = (undefined8 *)FUN_10087a0f0("dynamic");
      puVar8 = (undefined8 *)0x0;
      if ((((puVar6 != (undefined8 *)0x0) &&
           (iVar5 = FUN_10087ac60(puVar6,"ID",param_1,0), puVar8 = puVar6, iVar5 != 0)) &&
          (iVar5 = FUN_10087ac60(puVar6,"DIR_LOAD","2",0), iVar5 != 0)) &&
         (((iVar5 = FUN_10087ac60(puVar6,"DIR_ADD",pcVar9,0), iVar5 != 0 &&
           (iVar5 = FUN_10087ac60(puVar6,"LIST_ADD","1",0), iVar5 != 0)) &&
          (iVar5 = FUN_10087ac60(puVar6,"LOAD",0,0), iVar5 != 0)))) {
        return puVar6;
      }
    }
    FUN_100879890(puVar8);
    FUN_100887ce0(0x26,0x6a,0x74,"eng_list.c",0x186);
    FUN_1008890a0(2,"id=",param_1);
  }
  return (undefined8 *)0x0;
}

