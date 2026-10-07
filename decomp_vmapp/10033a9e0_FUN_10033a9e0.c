
void FUN_10033a9e0(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  byte bVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  ulong uVar10;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x18);
    plVar7 = (long *)(param_1 + 0x18);
    do {
      while (plVar8 = plVar5, *(uint *)(plVar8 + 4) < param_2) {
        plVar1 = plVar8 + 1;
        plVar5 = (long *)*plVar1;
        plVar8 = plVar7;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10033aa30;
      }
      plVar5 = (long *)*plVar8;
      plVar7 = plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
LAB_10033aa30:
    if ((plVar8 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar8 + 4) <= param_2)) {
      puVar2 = (undefined8 *)plVar8[5];
      puVar9 = (undefined4 *)*puVar2;
      if (puVar9 != (undefined4 *)0x0) {
        (**(code **)(*param_3 + 0x10))(param_3,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
      }
      puVar9 = (undefined4 *)puVar2[1];
      if (puVar9 != (undefined4 *)0x0) {
        (**(code **)(*param_3 + 0x18))(*puVar9,puVar9[1],param_3);
      }
      if (puVar2[2] != 0) {
        (**(code **)(*param_3 + 0x28))(param_3);
      }
      puVar9 = (undefined4 *)puVar2[3];
      if (puVar9 != (undefined4 *)0x0) {
        *(undefined4 *)(param_3 + 0x37) = *puVar9;
        *(undefined4 *)((long)param_3 + 0x1bc) = puVar9[1];
        *(undefined4 *)(param_3 + 0x38) = puVar9[2];
        *(undefined4 *)((long)param_3 + 0x1c4) = puVar9[3];
        *(undefined4 *)(param_3 + 0x39) = puVar9[4];
        *(undefined4 *)((long)param_3 + 0x1cc) = puVar9[5];
        *(undefined4 *)(param_3 + 0x3a) = puVar9[6];
        *(undefined4 *)((long)param_3 + 0x1d4) = puVar9[7];
        *(undefined4 *)(param_3 + 0x3b) = puVar9[8];
        *(undefined4 *)((long)param_3 + 0x1dc) = puVar9[9];
        *(undefined4 *)(param_3 + 0x3c) = puVar9[10];
        *(undefined4 *)((long)param_3 + 0x1e4) = puVar9[0xb];
        *(undefined4 *)(param_3 + 0x3d) = puVar9[0xc];
        *(undefined4 *)((long)param_3 + 0x1ec) = puVar9[0xd];
        *(undefined4 *)(param_3 + 0x3e) = puVar9[0xe];
        *(undefined4 *)((long)param_3 + 500) = puVar9[0xf];
      }
      for (puVar9 = (undefined4 *)puVar2[4]; puVar9 != (undefined4 *)puVar2[5]; puVar9 = puVar9 + 2)
      {
        (**(code **)(*param_3 + 0x38))(param_3,*puVar9,*(undefined1 *)(puVar9 + 1));
      }
      puVar9 = (undefined4 *)puVar2[7];
      if (puVar9 != (undefined4 *)puVar2[8]) {
        do {
          puVar6 = (undefined4 *)FUN_100350f40(param_3 + 0x3f,*puVar9);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = puVar9[1];
            puVar6[1] = puVar9[2];
            puVar6[2] = puVar9[3];
            puVar6[3] = puVar9[4];
            puVar6[4] = puVar9[5];
            puVar6[5] = puVar9[6];
            puVar6[6] = puVar9[7];
            puVar6[7] = puVar9[8];
            puVar6[8] = puVar9[9];
            puVar6[9] = puVar9[10];
            puVar6[10] = puVar9[0xb];
            puVar6[0xb] = puVar9[0xc];
            puVar6[0xc] = puVar9[0xd];
            puVar6[0xd] = puVar9[0xe];
            puVar6[0xe] = puVar9[0xf];
            puVar6[0xf] = puVar9[0x10];
            puVar6[0x10] = puVar9[0x11];
            puVar6[0x11] = puVar9[0x12];
            puVar6[0x12] = puVar9[0x13];
            puVar6[0x13] = puVar9[0x14];
            puVar6[0x14] = puVar9[0x15];
            puVar6[0x15] = puVar9[0x16];
            puVar6[0x16] = puVar9[0x17];
            puVar6[0x17] = puVar9[0x18];
            puVar6[0x18] = puVar9[0x19];
            puVar6[0x19] = puVar9[0x1a];
            puVar6[0x1a] = puVar9[0x1b];
            puVar6[0x1b] = puVar9[0x1c];
            puVar6[0x1c] = puVar9[0x1d];
          }
          puVar9 = puVar9 + 0x1f;
        } while (puVar9 != (undefined4 *)puVar2[8]);
      }
      for (puVar9 = (undefined4 *)puVar2[10]; puVar9 != (undefined4 *)puVar2[0xb];
          puVar9 = puVar9 + 5) {
        (**(code **)(*param_3 + 0x48))(param_3,*puVar9,puVar9 + 1);
      }
      for (puVar9 = (undefined4 *)puVar2[0xd]; puVar9 != (undefined4 *)puVar2[0xe];
          puVar9 = puVar9 + 0x11) {
        (**(code **)(*param_3 + 0x58))(param_3,*puVar9,puVar9 + 1);
      }
      for (puVar9 = (undefined4 *)puVar2[0x10]; puVar9 != (undefined4 *)puVar2[0x11];
          puVar9 = puVar9 + 2) {
        (**(code **)(*param_3 + 0x60))(param_3,*puVar9,puVar9[1]);
      }
      for (puVar9 = (undefined4 *)puVar2[0x13]; puVar9 != (undefined4 *)puVar2[0x14];
          puVar9 = puVar9 + 4) {
        (**(code **)(*param_3 + 0x68))(param_3,*puVar9,puVar9[1],*(undefined8 *)(puVar9 + 2));
      }
      for (puVar9 = (undefined4 *)puVar2[0x16]; puVar9 != (undefined4 *)puVar2[0x17];
          puVar9 = puVar9 + 4) {
        (**(code **)(*param_3 + 0x80))(param_3,*puVar9,puVar9[1],*(undefined8 *)(puVar9 + 2));
      }
      if ((undefined4 *)puVar2[0x19] != (undefined4 *)0x0) {
        (**(code **)(*param_3 + 0x98))(param_3,*(undefined4 *)puVar2[0x19]);
      }
      if ((undefined4 *)puVar2[0x1a] != (undefined4 *)0x0) {
        (**(code **)(*param_3 + 0xa0))(param_3,*(undefined4 *)puVar2[0x1a]);
      }
      if ((undefined4 *)puVar2[0x1b] != (undefined4 *)0x0) {
        (**(code **)(*param_3 + 0xa8))(param_3,*(undefined4 *)puVar2[0x1b]);
      }
      puVar3 = (uint *)puVar2[0x1c];
      if (puVar3 != (uint *)0x0) {
        uVar10 = 0;
        do {
          bVar4 = (byte)uVar10 & 0x1f;
          if (*puVar3 >> bVar4 == 0) {
            return;
          }
          if ((*puVar3 >> bVar4 & 1) != 0) {
            (**(code **)(*param_3 + 0xb0))(param_3,uVar10 & 0xffffffff,puVar3[uVar10 + 1]);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < 0x10);
      }
    }
  }
  return;
}

