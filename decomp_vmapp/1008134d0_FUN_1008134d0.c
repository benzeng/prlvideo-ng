
undefined8 FUN_1008134d0(int *param_1,int param_2)

{
  size_t sVar1;
  int iVar2;
  undefined8 in_RAX;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  piVar3 = (int *)FUN_100812f50();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x9c) + 0x48);
  if (lVar4 == 0) {
    lVar4 = FUN_10080ed10(param_1);
  }
  *(long *)(piVar3 + 0x32) = lVar4;
  if (*(long *)(param_1 + 0x4c) != 0) {
    FUN_100813340();
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
  }
  if (param_2 == 0) {
    piVar3[0x11] = 0;
  }
  else {
    iVar2 = *param_1;
    if (iVar2 < 0xfeff) {
      if (iVar2 < 0x300) {
        if (iVar2 == 2) {
          *piVar3 = 2;
          piVar3[0x11] = 0x10;
        }
        else {
          if (iVar2 != 0x100) goto switchD_100813618_default;
          *piVar3 = 0x100;
          piVar3[0x11] = 0x20;
        }
      }
      else {
        switch(iVar2) {
        case 0x300:
          *piVar3 = 0x300;
          piVar3[0x11] = 0x20;
          break;
        case 0x301:
          *piVar3 = 0x301;
          piVar3[0x11] = 0x20;
          break;
        case 0x302:
          *piVar3 = 0x302;
          piVar3[0x11] = 0x20;
          break;
        case 0x303:
          *piVar3 = 0x303;
          piVar3[0x11] = 0x20;
          break;
        default:
          goto switchD_100813618_default;
        }
      }
    }
    else {
      if (iVar2 != 0xfeff) {
switchD_100813618_default:
        uVar6 = 0x103;
        uVar9 = 0x1c0;
        goto LAB_10081390d;
      }
      *piVar3 = 0xfeff;
      piVar3[0x11] = 0x20;
    }
    if (param_1[0x85] == 0) {
      FUN_10081d010(5,0xc,"ssl_sess.c",0x1da);
      pcVar8 = *(code **)(param_1 + 0x4e);
      if (*(code **)(param_1 + 0x4e) == (code *)0x0) {
        pcVar8 = FUN_100813940;
        if (*(code **)(*(long *)(param_1 + 0x9c) + 0x180) != (code *)0x0) {
          pcVar8 = *(code **)(*(long *)(param_1 + 0x9c) + 0x180);
        }
      }
      FUN_10081d010(6,0xc,"ssl_sess.c",0x1df);
      uStack_38 = CONCAT44(piVar3[0x11],(undefined4)uStack_38);
      iVar2 = (*pcVar8)(param_1,piVar3 + 0x12,(long)&uStack_38 + 4);
      if (iVar2 == 0) {
        uVar6 = 0x12d;
        uVar9 = 0x1e5;
        goto LAB_10081390d;
      }
      uVar7 = (ulong)uStack_38._4_4_;
      if ((uVar7 == 0) || ((uint)piVar3[0x11] < uStack_38._4_4_)) {
        uVar6 = 0x12f;
        uVar9 = 0x1f0;
        goto LAB_10081390d;
      }
      if ((uStack_38._4_4_ < (uint)piVar3[0x11]) && (*param_1 == 2)) {
        ___bzero((long)piVar3 + uVar7 + 0x48);
        uVar7 = (ulong)(uint)piVar3[0x11];
      }
      else {
        piVar3[0x11] = uStack_38._4_4_;
      }
      iVar2 = FUN_10080de90(param_1,piVar3 + 0x12,uVar7);
      if (iVar2 != 0) {
        uVar6 = 0x12e;
        uVar9 = 0x1fc;
        goto LAB_10081390d;
      }
    }
    else {
      piVar3[0x11] = 0;
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      lVar4 = FUN_10087d050();
      *(long *)(piVar3 + 0x46) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x44;
        uVar9 = 0x205;
        goto LAB_10081390d;
      }
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      if (*(long *)(piVar3 + 0x4a) != 0) {
        FUN_10081e1a0();
      }
      pvVar5 = (void *)FUN_10081ddd0(param_1[0x86],"ssl_sess.c",0x20f);
      *(void **)(piVar3 + 0x4a) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0x41;
        uVar9 = 0x211;
        goto LAB_10081390d;
      }
      sVar1 = *(size_t *)(param_1 + 0x86);
      *(size_t *)(piVar3 + 0x48) = sVar1;
      _memcpy(pvVar5,*(void **)(param_1 + 0x88),sVar1);
    }
    if (*(long *)(param_1 + 0x8c) != 0) {
      if (*(long *)(piVar3 + 0x4e) != 0) {
        FUN_10081e1a0();
      }
      pvVar5 = (void *)FUN_10081ddd0(param_1[0x8a],"ssl_sess.c",0x21e);
      *(void **)(piVar3 + 0x4e) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0x41;
        uVar9 = 0x220;
        goto LAB_10081390d;
      }
      sVar1 = *(size_t *)(param_1 + 0x8a);
      *(size_t *)(piVar3 + 0x4c) = sVar1;
      _memcpy(pvVar5,*(void **)(param_1 + 0x8c),sVar1);
    }
  }
  if ((ulong)(uint)param_1[0x42] < 0x21) {
    _memcpy(piVar3 + 0x1b,param_1 + 0x43,(ulong)(uint)param_1[0x42]);
    piVar3[0x1a] = param_1[0x42];
    *(int **)(param_1 + 0x4c) = piVar3;
    *piVar3 = *param_1;
    piVar3[0x2e] = 0;
    piVar3[0x2f] = 0;
    return 1;
  }
  uVar6 = 0x44;
  uVar9 = 0x230;
LAB_10081390d:
  FUN_100887ce0(0x14,0xb5,uVar6,"ssl_sess.c",uVar9);
  FUN_100813340(piVar3);
  return 0;
}

