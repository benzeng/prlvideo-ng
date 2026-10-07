
ulong FUN_1007154a0(void)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long ****pppplVar10;
  long ***local_a8;
  long ***local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_a8 = (long ***)&local_a8;
  local_a0 = (long ***)&local_a8;
  local_38 = lVar9;
  uVar5 = FUN_10071c210(&local_a8,0);
  if ((int)uVar5 == 0) {
    pppplVar10 = (long ****)local_a8;
    if ((long ****)local_a8 != &local_a8) {
      do {
        iVar3 = FUN_100722880(pppplVar10 + 4);
        lVar9 = DAT_10116db48;
        if (iVar3 - 1U < 7) {
          lVar7 = (long)(int)(iVar3 - 1U) * 0xf1;
          pcVar8 = (char *)(DAT_10116db48 + 0x18 + lVar7);
          if (pcVar8 != (char *)0x0) {
            iVar4 = _strncmp(pcVar8,(char *)((long)pppplVar10 + 0x184),0x50);
            iVar3 = *(int *)(lVar9 + 0x6c + lVar7);
            if (iVar4 == 0) {
              if (iVar3 != 0) goto LAB_1007156ab;
            }
            else if (iVar3 != 0) {
              local_98 = CONCAT44(iVar3,*(undefined4 *)(lVar9 + 0x68 + lVar7));
              _memcpy(&uStack_90,pcVar8,0x50);
              FUN_100714970(DAT_10116db30,2,0x58,&local_98);
              local_58 = 0;
              uStack_50 = 0;
              local_68 = 0;
              uStack_60 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_48 = 0;
            }
            piVar6 = (int *)(lVar9 + 0x68 + lVar7);
            piVar1 = (int *)(lVar9 + 0x6c + lVar7);
            if (*piVar6 == 1) {
              iVar3 = _strcasecmp("VZSRV",(char *)(pppplVar10 + 4));
              if ((((iVar3 == 0) || (*piVar1 < 5)) || ((*(byte *)(lVar9 + 0x104 + lVar7) & 8) != 0))
                 && (FUN_1007150d0(pppplVar10,pcVar8), iVar3 != 0)) {
                pbVar2 = (byte *)(lVar9 + 0x104 + lVar7);
                *pbVar2 = *pbVar2 | 8;
              }
            }
            else {
              FUN_1007150d0(pppplVar10,pcVar8);
            }
            local_98 = CONCAT44(*piVar1,*piVar6);
            _memcpy(&uStack_90,pcVar8,0x50);
            FUN_100714970(DAT_10116db30,1,0x58,&local_98);
          }
        }
LAB_1007156ab:
        pppplVar10 = (long ****)*pppplVar10;
      } while (pppplVar10 != &local_a8);
    }
    FUN_100719320(&local_a8);
    lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
    uVar5 = uVar5 & 0xffffffff;
  }
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

