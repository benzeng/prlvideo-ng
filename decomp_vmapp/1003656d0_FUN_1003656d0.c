
undefined8
FUN_1003656d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
             long param_6)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  uint local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  long local_38;
  
  cVar2 = FUN_1003651d0(param_1,param_2,&local_38);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar15 = 0;
  local_54 = 1;
  if (*(int *)(param_3 + 0x18) == 1) {
    uVar13 = 0;
  }
  else {
    if (3 < *(int *)(param_3 + 0x18) - 2U) {
      return 0;
    }
    lVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x10))();
    uVar13 = 0;
    uVar15 = 0;
    if (lVar4 != 0) {
      uVar13 = *(uint *)(lVar4 + 8);
      uVar15 = *(uint *)(lVar4 + 0xc);
      local_54 = *(int *)(lVar4 + 0x10) + uVar15;
    }
  }
  lVar4 = *(long *)(param_3 + 8);
  lVar5 = 0;
  if ((ulong)*(uint *)(param_3 + 0x10) <
      (ulong)(*(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x40) >> 3)) {
    lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(param_3 + 0x10) * 8);
  }
  bVar1 = (byte)uVar13;
  if (*(int *)(lVar4 + 0x24) == 5) {
    if ((**(uint **)(lVar5 + 0x88) >> (uVar13 & 0x1f) & 1) == 0) {
      uVar3 = 1;
      if (*(uint *)(lVar4 + 0x14) >> (bVar1 & 0x1f) != 0) {
        uVar3 = *(uint *)(lVar4 + 0x14) >> (bVar1 & 0x1f);
      }
      if (param_5 == 0) {
        if (uVar15 != 0) {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                    (*(long **)(param_1 + 0x20),lVar4,0,0,uVar15,uVar13,&DAT_100b3c990);
        }
        bVar16 = uVar3 < local_54;
        uVar3 = uVar3 - local_54;
        if (bVar16 || uVar3 == 0) goto LAB_1003658ba;
        plVar12 = *(long **)(param_1 + 0x20);
        lVar5 = *plVar12;
        uVar7 = local_54;
      }
      else {
        plVar12 = *(long **)(param_1 + 0x20);
        lVar5 = *plVar12;
        uVar7 = 0;
      }
      (**(code **)(lVar5 + 0x18))(plVar12,lVar4,0,uVar7,uVar3,uVar13,&DAT_100b3c990);
    }
  }
  else if ((param_5 != 0) && (uVar15 < local_54)) {
    uVar9 = (ulong)uVar15;
    do {
      if ((*(uint *)(*(long *)(lVar5 + 0x88) + uVar9 * 4) & 1 << (bVar1 & 0x1f)) == 0) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                  (*(long **)(param_1 + 0x20),lVar4,0,uVar9 & 0xffffffff,1,uVar13,&DAT_100b3c990);
      }
      uVar9 = uVar9 + 1;
    } while (local_54 != (uint)uVar9);
  }
LAB_1003658ba:
  if ((local_38 != 0) && (*(int *)(local_38 + 8) != 0)) {
    uVar10 = 0x8e14;
    if (*(int *)(local_38 + 4) != 5) {
      uVar10 = 0x8e13;
    }
    (*DAT_1011c74a0)(*(int *)(local_38 + 8),uVar10);
  }
  uVar3 = *(uint *)(param_3 + 0x14);
  if ((int)uVar3 < 0x66) {
    if (uVar3 < 9) {
      uVar7 = 0x10a;
LAB_100365919:
      if ((uVar7 >> (uVar3 & 0x1f) & 1) != 0) {
        puVar6 = &DAT_1011c5c78;
        goto LAB_10036592e;
      }
    }
  }
  else {
    uVar3 = uVar3 - 0x66;
    if (uVar3 < 0xd) {
      uVar7 = 0x1015;
      goto LAB_100365919;
    }
  }
  puVar6 = &DAT_1011c5bc0;
LAB_10036592e:
  (*(code *)*puVar6)(0x8db9);
  if (param_5 == 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
              (*(long **)(param_1 + 0x20),lVar4,0,uVar15,local_54 - uVar15,uVar13,param_4);
  }
  else {
    puVar14 = (uint *)(param_6 + 0xc);
    do {
      uVar3 = puVar14[-3];
      if ((int)puVar14[-3] < 0) {
        uVar3 = 0;
      }
      uVar7 = puVar14[-2];
      if ((int)puVar14[-2] < 0) {
        uVar7 = 0;
      }
      uVar8 = *(uint *)(lVar4 + 0xc) >> (bVar1 & 0x1f);
      if (*(uint *)(lVar4 + 0xc) >> (bVar1 & 0x1f) == 0) {
        uVar8 = 1;
      }
      if ((int)puVar14[-1] <= (int)uVar8) {
        uVar8 = puVar14[-1];
      }
      uVar11 = *(uint *)(lVar4 + 0x10) >> (bVar1 & 0x1f);
      if (*(uint *)(lVar4 + 0x10) >> (bVar1 & 0x1f) == 0) {
        uVar11 = 1;
      }
      if ((int)*puVar14 <= (int)uVar11) {
        uVar11 = *puVar14;
      }
      if (((int)uVar3 < (int)uVar8) && ((int)uVar7 < (int)uVar11)) {
        local_48 = uVar3;
        local_44 = uVar7;
        local_40 = uVar8;
        local_3c = uVar11;
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                  (*(long **)(param_1 + 0x20),lVar4,&local_48,uVar15,local_54 - uVar15,uVar13,
                   param_4);
      }
      puVar14 = puVar14 + 4;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) | 1;
  if ((local_38 != 0) && (*(int *)(local_38 + 8) != 0)) {
    (*DAT_1011c7588)();
  }
  return 0;
}

