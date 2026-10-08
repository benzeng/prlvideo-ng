
byte FUN_100cdc0a0(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte extraout_AL;
  char cVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte bVar7;
  undefined4 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar1 = *(uint *)(param_1 + 0x7f);
  uVar10 = (uVar1 ^ param_2) & param_3;
  if (((uVar10 & 0x1e0000) != 0) && ((uVar10 & 0x207f) == 0)) {
    param_2 = param_2 >> 0xe & 0x20 |
              param_2 >> 0x11 & 8 | param_2 >> 0x10 & 2 | param_2 >> 0x12 & 1 | param_2;
    uVar10 = (uVar1 ^ param_2) & param_3;
  }
  if (uVar10 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
    puVar8 = &DAT_101daf2a0;
    uVar9 = 0;
    do {
      uVar12 = 1 << ((byte)uVar9 & 0x1f);
      if ((uVar10 >> ((uint)uVar9 & 0x1f) & 1) != 0) {
        if (uVar9 == 0x10) {
          if (((char)param_1[0x90] == '\0') || ((*(byte *)(param_1 + 0x89) & 4) != 0)) {
            *(uint *)(param_1 + 0x7f) = *(uint *)(param_1 + 0x7f) ^ 0x10000;
          }
          else {
            lVar6 = FUN_100ddba70();
            if ((((char)param_1[0x90] != '\0') && ((ulong)(lVar6 - param_1[0x80]) < 1000000)) &&
               ((*(uint *)(param_1 + 0x89) & 4) == 0)) {
              if (1 < DAT_10230ffd0) {
                FUN_100df99c0("","hid",2,
                              "[CHIDMacHook] skip change guest leds state for caps lock (%u ms)",
                              (lVar6 - param_1[0x80] & 0xffffffffU) / 1000);
              }
              goto LAB_100cdc330;
            }
            lVar6 = FUN_100ddba70();
            param_1[0x80] = lVar6;
          }
          cVar3 = FUN_100cd3900(param_1,0x42,1);
          if (cVar3 == '\0') {
            bVar4 = 0;
          }
          else {
            bVar4 = (**(code **)(*param_1 + 0xc0))(param_1,0x42,1);
          }
          cVar3 = FUN_100cd3900(param_1,0x42,0);
          bVar5 = 0;
          if (cVar3 != '\0') {
            bVar5 = (**(code **)(*param_1 + 0xc0))(param_1,0x42,0);
          }
          bVar7 = bVar5 & bVar4 & bVar7;
          if (1 < DAT_10230ffd0) {
            FUN_100df99c0("","hid",2,"[CHIDMacHook] Change guest leds state for caps lock");
          }
        }
        else {
          uVar11 = uVar1 & param_3 & ~param_2 & uVar12;
          bVar4 = 1;
          if ((0x5edf80UL >> (uVar9 & 0x3f) & 1) == 0) {
            uVar2 = *puVar8;
            if ((uVar9 == 0x15) && (uVar11 != 0)) {
              *(int *)(param_1 + 0xa1) = -(int)param_1[0xa1];
            }
            cVar3 = FUN_100cd3900(param_1,uVar2,uVar11 == 0);
            if (cVar3 == '\0') {
              bVar4 = 0;
            }
            else {
              (**(code **)(*param_1 + 0xc0))(param_1,uVar2,uVar11 == 0);
              bVar4 = extraout_AL;
            }
          }
          bVar7 = bVar4 & bVar7;
          *(uint *)(param_1 + 0x7f) = *(uint *)(param_1 + 0x7f) ^ uVar12;
        }
      }
LAB_100cdc330:
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 != 0x18);
  }
  return bVar7;
}

