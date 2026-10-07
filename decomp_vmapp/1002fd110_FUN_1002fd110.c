
void FUN_1002fd110(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  if ((*(int *)(param_1 + 0x118e4) != 0) && (*(uint *)(param_1 + 0x118c0) == param_2)) {
    uVar6 = (ulong)param_2;
    if (*(char *)(param_1 + 0x11901) == '\0') {
      (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,0x84c0);
      (*(code *)DAT_1011c4a88[6])
                (*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x9d4 + uVar6 * 0x8f0));
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0xde1,0x2801,0x2600);
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0xde1,0x2800,0x2600);
    }
    uVar7 = 0x2601;
    if (((int)*(short *)(param_1 + 0x118ac) ==
         *(int *)(param_1 + 0x118b8) - *(int *)(param_1 + 0x118b0)) &&
       ((int)*(short *)(param_1 + 0x118ae) ==
        *(int *)(param_1 + 0x118bc) - *(int *)(param_1 + 0x118b4))) {
      uVar7 = *(undefined4 *)(param_1 + 0x9e0 + uVar6 * 0x8f0);
    }
    (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,0x84c1);
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118e4));
    (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0xde1,0x2801,uVar7);
    (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0xde1,0x2800,uVar7);
    iVar1 = *(int *)(param_1 + 0x118f0);
    if (iVar1 == 0x32315659) {
      if (*(char *)(param_1 + 0x11901) == '\0') {
        puVar4 = (undefined4 *)(param_1 + 0x11910);
      }
      else {
        puVar4 = (undefined4 *)(param_1 + 0x1191c);
      }
      uVar8 = *puVar4;
      (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,0x84c2);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118ec));
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0xde1,0x2801,uVar7);
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0xde1,0x2800,uVar7);
      (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,0x84c3);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118e8));
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0xde1,0x2801,uVar7);
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0xde1,0x2800,uVar7);
    }
    else {
      if ((iVar1 == 0x32595559) || (iVar1 == 0x59565955)) {
        if (*(char *)(param_1 + 0x11901) == '\0') {
          puVar4 = (undefined4 *)(param_1 + 0x1190c);
        }
        else {
          puVar4 = (undefined4 *)(param_1 + 0x11918);
        }
      }
      else if (*(char *)(param_1 + 0x11901) == '\0') {
        puVar4 = (undefined4 *)(param_1 + 0x11908);
      }
      else {
        puVar4 = (undefined4 *)(param_1 + 0x11914);
      }
      uVar8 = *puVar4;
    }
    (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar8);
    uVar2 = *(uint *)(param_1 + 0x118cc);
    local_48 = (float)(uVar2 >> 0x10 & 0xff);
    local_44 = (float)(uVar2 >> 8 & 0xff);
    local_40 = (float)(uVar2 & 0xff);
    local_3c = (float)(uVar2 >> 0x18);
    (*(code *)DAT_1011c4a88[0x1f8])(*DAT_1011c4a88,5,&local_48);
    uVar2 = *(uint *)(param_1 + 0x118d0);
    local_48 = (float)(uVar2 >> 0x10 & 0xff);
    local_44 = (float)(uVar2 >> 8 & 0xff);
    local_40 = (float)(uVar2 & 0xff);
    local_3c = (float)(uVar2 >> 0x18);
    (*(code *)DAT_1011c4a88[0x1f8])(*DAT_1011c4a88,4,&local_48);
    lVar5 = uVar6 * 0x8f0;
    iVar1 = *(int *)(param_1 + 0x9a4 + lVar5);
    iVar3 = *(int *)(param_1 + 0x9a8 + lVar5);
    fVar9 = (float)*(uint *)(param_1 + 0x99c + lVar5) * DAT_100b39670;
    fVar10 = (float)*(uint *)(param_1 + 0x9a0 + lVar5) * DAT_100b39670;
    fVar11 = (float)*(uint *)(param_1 + 0x938 + lVar5);
    fVar12 = (float)*(uint *)(param_1 + 0x93c + lVar5);
    (*(code *)DAT_1011c4a88[0x1e6])
              ((float)(int)*(short *)(param_1 + 0x118a8) / fVar11,
               (float)(int)*(short *)(param_1 + 0x118aa) / fVar12,
               (float)(int)*(short *)(param_1 + 0x118ac) / fVar11,
               (float)(int)*(short *)(param_1 + 0x118ae) / fVar12,*DAT_1011c4a88,2);
    (*(code *)DAT_1011c4a88[0x1e6])
              (((float)(int)*(short *)(param_1 + 0x118a8) - (float)iVar1) / fVar9 + DAT_100b39674,
               DAT_100b39678 - ((float)(int)*(short *)(param_1 + 0x118aa) - (float)iVar3) / fVar10,
               (float)(int)*(short *)(param_1 + 0x118ac) / fVar9,
               (float)-(int)*(short *)(param_1 + 0x118ae) / fVar10,*DAT_1011c4a88,3);
    (*(code *)DAT_1011c4a88[0x1e6])
              ((float)*(int *)(param_1 + 0x118b0) / (float)*(uint *)(param_1 + 0x118c4),
               (float)*(int *)(param_1 + 0x118b4) / (float)*(uint *)(param_1 + 0x118c8),
               (float)(*(int *)(param_1 + 0x118b8) - *(int *)(param_1 + 0x118b0)) /
               (float)*(uint *)(param_1 + 0x118c4),
               (float)(*(int *)(param_1 + 0x118bc) - *(int *)(param_1 + 0x118b4)) /
               (float)*(uint *)(param_1 + 0x118c8),*DAT_1011c4a88,1);
    (*(code *)DAT_1011c4a88[0x42])(*DAT_1011c4a88,4,(uint)DAT_101116287 * 6,(uint)DAT_10111627b * 6)
    ;
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,0);
    if (*(int *)(param_1 + 0x118f0) == 0x32315659) {
      (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,0x84c2);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,0);
      (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,0x84c1);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,0);
    }
    (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,0x84c0);
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,0);
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar5 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

