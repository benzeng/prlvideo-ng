
undefined8 FUN_1003b7f20(long param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined **ppuVar4;
  uint uVar5;
  ulong uVar6;
  ulong extraout_RDX;
  char *extraout_RDX_00;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  uint local_68;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar5 = param_2[1] >> 6 & 0xff;
  switch(uVar5) {
  case 0:
    goto LAB_1003b7fc1;
  case 1:
    uVar11 = *(undefined8 *)(param_1 + 8);
    pcVar10 = "-";
    break;
  case 2:
    uVar11 = *(undefined8 *)(param_1 + 8);
    pcVar10 = "abs(";
    break;
  case 3:
    uVar11 = *(undefined8 *)(param_1 + 8);
    pcVar10 = "-abs(";
    break;
  default:
    uVar11 = *(undefined8 *)(param_1 + 8);
    pcVar10 = "mod?(";
  }
  FUN_10038e8e0(uVar11,pcVar10);
LAB_1003b7fc1:
  puVar12 = (undefined8 *)(param_1 + 8);
  uVar8 = *param_2;
  uVar15 = uVar8 >> 0xc & 0xff;
  if (uVar15 < 0x29) {
    ppuVar4 = &PTR_s_R_1011195d0 + (ulong)uVar15 * 2;
  }
  else {
    ppuVar4 = &PTR_s_operand__101119860;
  }
  FUN_10038e8e0(*puVar12,*ppuVar4);
  bVar1 = (byte)param_2[2];
  if ((param_2[0xb] & 1) == 0) {
    if (bVar1 != 0) {
      uVar8 = uVar8 >> 0xc & 0xfe;
      puVar16 = param_2 + 6;
      uVar13 = 0;
      do {
        if ((uVar13 == 0 &&
             (((((uVar15 == 10 || uVar8 == 6) || uVar15 == 3) || uVar15 == 8) || uVar15 == 0x10) ||
             uVar8 == 0x1e)) && (puVar16[-1] == 0)) {
          FUN_10038e8e0(*puVar12,"%d",puVar16[-3]);
        }
        else {
          uVar9 = 0;
          FUN_10038e8e0(*puVar12,"[");
          if (puVar16[-1] != 0) {
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
            _local_68 = CONCAT44(*puVar16,puVar16[-1]);
            _uStack_60 = CONCAT44(puVar16[-2],1);
            FUN_1003b7f20(param_1,&local_68);
            uVar9 = puVar16[-1];
          }
          uVar6 = (ulong)puVar16[-3];
          if (puVar16[-3] == 0) {
            uVar6 = 0;
            if (uVar9 == 0) goto LAB_1003b8100;
          }
          else {
            if (uVar9 != 0) {
              FUN_10038e8e0(*puVar12," + ");
              uVar6 = (ulong)puVar16[-3];
            }
LAB_1003b8100:
            FUN_10038e8e0(*puVar12,"%d",uVar6);
            uVar6 = extraout_RDX;
          }
          FUN_10038e8e0(*puVar12,"]",uVar6);
        }
        uVar13 = uVar13 + 1;
        puVar16 = puVar16 + 4;
      } while (uVar13 < (byte)param_2[2]);
    }
    if ((*param_2 & 3) == 2) {
      FUN_1003b8710(param_1);
    }
  }
  else {
    bVar2 = true;
    if (bVar1 != 0) {
      bVar2 = true;
      uVar6 = 0;
      do {
        uVar8 = param_2[uVar6 + 3];
        bVar3 = 1;
        if (uVar8 != 0) {
          if (uVar8 == 0xffffffff) {
            bVar3 = 0;
          }
          else if (uVar8 == 0x80000000) {
            bVar3 = 0;
          }
          else {
            uVar15 = uVar8 >> 0x17 & 0xff;
            bVar3 = 0;
            if ((uVar15 != 0xff) && ((uVar15 != 0 || ((uVar8 & 0x7fffff) == 0)))) {
              bVar3 = 1;
            }
          }
        }
        bVar2 = (bool)(bVar3 & bVar2);
        uVar6 = uVar6 + 1;
      } while (uVar6 < bVar1);
    }
    FUN_10038e8e0(*puVar12,"(");
    pcVar10 = extraout_RDX_00;
    if ((char)param_2[2] != '\0') {
      lVar14 = 0;
      pcVar7 = "";
      do {
        if (bVar2) {
          FUN_10038e8e0(SUB84((double)(float)param_2[lVar14 + 3],0),*puVar12,"%s%f",pcVar7);
        }
        else {
          FUN_10038e8e0(*puVar12,"%s%x",pcVar7,param_2[lVar14 + 3]);
        }
        lVar14 = lVar14 + 1;
        pcVar10 = ", ";
        pcVar7 = ", ";
      } while ((uint)lVar14 < (uint)(byte)param_2[2]);
    }
    FUN_10038e8e0(*puVar12,")",pcVar10);
  }
  if (1 < uVar5) {
    FUN_10038e8e0(*puVar12,")");
  }
  return 0;
}

