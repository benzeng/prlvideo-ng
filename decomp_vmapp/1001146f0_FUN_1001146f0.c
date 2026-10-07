
undefined8 FUN_1001146f0(long *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  size_t sVar4;
  byte *pbVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  byte bVar12;
  undefined8 *puVar13;
  byte bVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 local_58;
  string local_48;
  char local_47 [7];
  size_t local_40;
  char *local_38;
  
  FUN_100115a00(&local_48,0x5f,param_2);
  lVar3 = *param_1;
  local_58 = 0;
  if (((long)*(int *)(lVar3 + 4) & 0x7ffffffffffffffU) != 0) {
    puVar16 = (undefined8 *)(lVar3 + *(long *)(lVar3 + 0x10));
    puVar13 = puVar16 + (long)*(int *)(lVar3 + 4) * 4;
    bVar1 = *param_2;
    bVar12 = bVar1 & 1;
    sVar4 = *(size_t *)(param_2 + 8);
    pbVar5 = *(byte **)(param_2 + 0x10);
    local_58 = 0;
    do {
      bVar2 = *(byte *)(puVar16 + 1);
      bVar14 = bVar2 & 1;
      if (bVar14 == 0) {
        sVar7 = (size_t)(bVar2 >> 1);
      }
      else {
        sVar7 = puVar16[2];
      }
      sVar8 = sVar4;
      if (bVar12 == 0) {
        sVar8 = (ulong)(bVar1 >> 1);
      }
      if (sVar7 == sVar8) {
        if (bVar14 == 0) {
          pbVar11 = (byte *)((long)puVar16 + 9);
        }
        else {
          pbVar11 = (byte *)puVar16[3];
        }
        pbVar9 = pbVar5;
        if (bVar12 == 0) {
          pbVar9 = param_2 + 1;
        }
        if (bVar14 == 0) {
          if (sVar7 != 0) {
            while (*pbVar11 == *pbVar9) {
              pbVar11 = pbVar11 + 1;
              pbVar9 = pbVar9 + 1;
              sVar7 = sVar7 - 1;
              if (sVar7 == 0) goto LAB_10011490a;
            }
            goto LAB_100114820;
          }
        }
        else if ((sVar7 != 0) && (iVar6 = _memcmp(pbVar11,pbVar9,sVar7), iVar6 != 0))
        goto LAB_100114864;
LAB_10011490a:
        local_58 = *puVar16;
        break;
      }
LAB_100114820:
      if (bVar14 == 0) {
        sVar7 = (size_t)(bVar2 >> 1);
      }
      else {
LAB_100114864:
        sVar7 = puVar16[2];
      }
      sVar8 = local_40;
      if (((byte)local_48 & 1) == 0) {
        sVar8 = (ulong)((byte)local_48 >> 1);
      }
      if (sVar7 == sVar8) {
        if (bVar14 == 0) {
          pcVar15 = (char *)((long)puVar16 + 9);
        }
        else {
          pcVar15 = (char *)puVar16[3];
        }
        pcVar10 = local_38;
        if (((byte)local_48 & 1) == 0) {
          pcVar10 = local_47;
        }
        if (bVar14 == 0) {
          while( true ) {
            if (sVar7 == 0) goto LAB_10011490a;
            if (*pcVar15 != *pcVar10) break;
            pcVar15 = pcVar15 + 1;
            pcVar10 = pcVar10 + 1;
            sVar7 = sVar7 - 1;
          }
        }
        else if ((sVar7 == 0) || (iVar6 = _memcmp(pcVar15,pcVar10,sVar7), iVar6 == 0))
        goto LAB_10011490a;
      }
      puVar16 = puVar16 + 4;
    } while (puVar16 != puVar13);
  }
  std::string::~string(&local_48);
  return local_58;
}

