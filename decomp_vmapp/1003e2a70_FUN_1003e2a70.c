
int FUN_1003e2a70(long *param_1)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 local_90 [3];
  undefined8 local_78 [3];
  undefined8 local_5c [4];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar5 = (ulong)*(uint *)(param_1 + 0x19), *(uint *)(param_1 + 0x19) == 0xffffffff)) {
    uVar5 = (ulong)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                            (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  uVar5 = uVar5 & 0xffff;
  puVar9 = (undefined8 *)param_1[9];
  bVar1 = *(byte *)(param_1[0xb] + 2);
  bVar3 = bVar1 & 0x3f;
  uVar8 = (uint)uVar5;
  if (bVar3 < 0x3f) {
    if (bVar3 < 0x1a) {
      if (bVar3 != 1) {
        if ((bVar3 == 0xd) && ((*(byte *)(param_1 + 5) & 0x50) != 0)) {
          if (uVar8 < 0x18) {
            puVar9 = local_78;
          }
          if (uVar8 < 0x19) {
            puVar9[2] = 0;
            puVar9[1] = 0;
            *puVar9 = 0;
            *(undefined2 *)puVar9 = 0x1600;
            *(undefined1 *)((long)puVar9 + 2) = 0;
            *(undefined1 *)((long)puVar9 + 9) = 0xe;
            *(byte *)(puVar9 + 1) = *(byte *)(puVar9 + 1) & 0x40 | bVar1 & 0x3f;
            *(byte *)((long)puVar9 + 10) = *(byte *)((long)puVar9 + 10) | 4;
            *(undefined2 *)((long)puVar9 + 0xe) = 0x4b00;
            *(byte *)(puVar9 + 2) = *(byte *)(puVar9 + 2) & 0xf0 | 1;
            *(undefined1 *)((long)puVar9 + 0x11) = 0xff;
            *(byte *)((long)puVar9 + 0x12) = *(byte *)((long)puVar9 + 0x12) & 0xf0 | 2;
            *(undefined1 *)((long)puVar9 + 0x13) = 0xff;
            lVar6 = *param_1;
            uVar7 = 0x18;
            goto LAB_1003e2d83;
          }
        }
        goto LAB_1003e2cac;
      }
      if (uVar8 < 0x12) goto LAB_1003e2cac;
      *(undefined2 *)(puVar9 + 2) = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      *(undefined2 *)puVar9 = 0x1000;
      *(undefined1 *)((long)puVar9 + 2) = 0;
      *(undefined1 *)((long)puVar9 + 9) = 8;
      *(byte *)(puVar9 + 1) = *(byte *)(puVar9 + 1) & 0x40 | bVar1 & 0x3f;
      *(undefined1 *)((long)puVar9 + 0xb) = 5;
      lVar6 = *param_1;
      uVar7 = 0x12;
LAB_1003e2d83:
      iVar4 = (**(code **)(lVar6 + 0x278))(param_1,uVar7,uVar5);
    }
    else {
      if (bVar3 == 0x1a) {
        if (uVar8 < 0x14) {
          puVar9 = local_90;
        }
        if ((uVar8 < 0x15) || ((*(uint *)((long)param_1 + 0xdc) & 0xff00) != 0xb00)) {
          *(undefined4 *)(puVar9 + 2) = 0;
          puVar9[1] = 0;
          *puVar9 = 0;
          *(undefined2 *)puVar9 = 0x1200;
          *(undefined1 *)((long)puVar9 + 2) = 0;
          *(undefined1 *)((long)puVar9 + 9) = 0x1a;
          *(byte *)(puVar9 + 1) = *(byte *)(puVar9 + 1) & 0x40 | bVar1 & 0x3f;
          lVar6 = *param_1;
          uVar7 = 0x14;
          goto LAB_1003e2d83;
        }
      }
      else if (bVar3 == 0x2a) {
        if (uVar8 < 0x24) {
          puVar9 = local_5c;
        }
        if ((uVar8 < 0x25) || ((*(uint *)((long)param_1 + 0xdc) & 0xff00) != 0xb00)) {
          *(undefined4 *)(puVar9 + 4) = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[1] = 0;
          *puVar9 = 0;
          *(undefined2 *)puVar9 = 0x2200;
          *(undefined1 *)((long)puVar9 + 2) = 0;
          *(undefined1 *)((long)puVar9 + 9) = 0x1a;
          *(byte *)(puVar9 + 1) = *(byte *)(puVar9 + 1) & 0x40 | bVar1 & 0x3f;
          *(byte *)((long)puVar9 + 10) = *(byte *)((long)puVar9 + 10) | 0x3f;
          bVar1 = *(byte *)((long)puVar9 + 0xd);
          *(byte *)((long)puVar9 + 0xd) = bVar1 | 1;
          *(byte *)((long)puVar9 + 0xc) = *(byte *)((long)puVar9 + 0xc) | 0x71;
          if ((*(byte *)(param_1 + 5) & 0x50) != 0) {
            *(byte *)((long)puVar9 + 0xd) = bVar1 | 5;
          }
          *(byte *)((long)puVar9 + 0xe) = *(byte *)((long)puVar9 + 0xe) & 0x10 | 0x29;
          *(undefined2 *)(puVar9 + 2) = 0x781e;
          *(undefined2 *)((long)puVar9 + 0x12) = 1;
          *(undefined2 *)((long)puVar9 + 0x14) = 8;
          *(undefined2 *)((long)puVar9 + 0x16) = 0x781e;
          lVar6 = *param_1;
          uVar7 = 0x24;
          goto LAB_1003e2d83;
        }
      }
LAB_1003e2cac:
      iVar4 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
    }
    if (iVar4 != 0) goto LAB_1003e2dac;
  }
  else {
    if (bVar3 != 0x3f) goto LAB_1003e2cac;
    (**(code **)(*param_1 + 0x278))(param_1,0x10,uVar5);
  }
  iVar4 = 0;
  if (puVar9 != (undefined8 *)param_1[9]) {
    _memcpy((undefined8 *)param_1[9],puVar9,uVar5);
  }
LAB_1003e2dac:
  if (lVar2 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

