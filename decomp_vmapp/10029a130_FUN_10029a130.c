
undefined1 FUN_10029a130(long *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  FUN_10029a070();
  LOCK();
  *(undefined8 *)(param_1[0x17] + 0xf0) = 0;
  UNLOCK();
  piVar2 = (int *)param_1[0x14];
  if (*piVar2 == 1) {
    uVar8 = piVar2[1];
    if ((((ulong)uVar8 < 0x21) && ((0x101010100U >> ((ulong)uVar8 & 0x3f) & 1) != 0)) &&
       (piVar2[2] - 1U < 8)) {
      iVar1 = piVar2[3];
      if (iVar1 < 32000) {
        if (iVar1 < 0x2b11) {
          if (iVar1 == 8000) goto LAB_10029a23c;
        }
        else if (iVar1 < 0x5622) {
          if ((iVar1 == 0x2b11) || (iVar1 == 16000)) {
LAB_10029a23c:
            uVar9 = 4;
            if (uVar8 != 0x18) {
              uVar9 = uVar8 >> 3;
            }
            uVar10 = (ulong)(uVar9 * piVar2[2]);
            if (param_1[0x13] == 0) {
              FUN_1007d7110(piVar2 + 0x17,0,uVar10);
              return 1;
            }
            FUN_1007d7110(piVar2 + 0x17,(uint)piVar2[0x16] / uVar10,uVar10);
            lVar5 = param_1[0x14];
            uVar8 = *(uint *)(lVar5 + 0x5c);
            uVar7 = *(int *)((long)param_1 + 0x74) * *(int *)(lVar5 + 0xc);
            uVar9 = uVar7 / 1000;
            uVar6 = *(int *)(lVar5 + 0xc) * (int)param_1[0xf];
            uVar7 = uVar7 / 1000;
            if (uVar8 >> 2 < uVar7) {
              if (0 < DAT_1011b55f8) {
                uVar4 = (**(code **)(*param_1 + 0x78))(param_1);
                FUN_1008e3970("AudioAS","LocalDevices",1,
                              "[CSoundDevice] [%s] trim U-threshold by FIFO (%u > %u)",uVar4,uVar7,
                              *(uint *)(param_1[0x14] + 0x5c) >> 2);
                lVar5 = param_1[0x14];
                uVar8 = *(uint *)(lVar5 + 0x5c);
              }
              uVar9 = uVar8 >> 2;
            }
            uVar7 = uVar9 * 4;
            uVar10 = (ulong)uVar7;
            uVar8 = uVar6 / 1000;
            if (uVar8 < uVar7) {
              if (0 < DAT_1011b55f8) {
                uVar4 = (**(code **)(*param_1 + 0x78))(param_1);
                FUN_1008e3970("AudioAS","LocalDevices",1,
                              "[CSoundDevice] [%s] trim O-threshold by U-th (%u > %u)",uVar4,
                              (ulong)uVar6 / 1000,uVar7);
                lVar5 = param_1[0x14];
              }
            }
            else {
              uVar10 = (ulong)uVar8;
            }
            uVar8 = *(uint *)(lVar5 + 0x5c);
            if (uVar8 < (uint)((int)uVar10 * 3)) {
              if (0 < DAT_1011b55f8) {
                uVar4 = (**(code **)(*param_1 + 0x78))(param_1);
                FUN_1008e3970("AudioAS","LocalDevices",1,
                              "[CSoundDevice] [%s] trim O-threshold by FIFO (%u > %u)",uVar4,uVar10,
                              *(undefined4 *)(param_1[0x14] + 0x5c));
                uVar8 = *(uint *)(param_1[0x14] + 0x5c);
              }
              uVar10 = (ulong)uVar8 / 3;
            }
            *(ulong *)(param_1[0x10] + 0xf0) = (ulong)uVar9;
            *(ulong *)(param_1[0x11] + 0xf0) = uVar10;
            cVar3 = (**(code **)(*(long *)param_1[0x13] + 0x18))();
            if (cVar3 != '\0') {
              FUN_10029a7b0(param_1);
              lVar5 = param_1[0x14];
              uVar8 = *(uint *)(lVar5 + 4);
              *(ulong *)(param_1[0x19] + 0xf0) = (ulong)uVar8;
              uVar9 = *(uint *)(lVar5 + 0xc);
              *(ulong *)(param_1[0x1a] + 0xf0) = (ulong)uVar9;
              uVar6 = *(uint *)(lVar5 + 8);
              *(ulong *)(param_1[0x1b] + 0xf0) = (ulong)uVar6;
              *(ulong *)(param_1[0x1c] + 0xf0) = (ulong)uVar8;
              *(ulong *)(param_1[0x1d] + 0xf0) = (ulong)uVar9;
              *(ulong *)(param_1[0x1e] + 0xf0) = (ulong)uVar6;
              return 1;
            }
            FUN_1008e3970("AudioAS","LocalDevices",0,"Can\'t apply format at ich change");
            return 0;
          }
        }
        else if ((iVar1 == 0x5622) || (iVar1 == 24000)) goto LAB_10029a23c;
      }
      else if (iVar1 < 88000) {
        if (iVar1 < 48000) {
          if ((iVar1 == 32000) || (iVar1 == 0xac44)) goto LAB_10029a23c;
        }
        else if ((iVar1 == 48000) || (iVar1 == 64000)) goto LAB_10029a23c;
      }
      else if ((iVar1 == 88000) || (iVar1 == 0x2ee00)) goto LAB_10029a23c;
    }
  }
  FUN_1007d7110(piVar2 + 0x17,0,4);
  return 1;
}

