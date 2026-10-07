
void FUN_1002fa430(undefined8 param_1,undefined8 *param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 in_stack_ffffffffffffff40;
  long lVar18;
  undefined4 uVar20;
  undefined8 uVar19;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff40 >> 0x20);
  lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar3 = (undefined4 *)param_2[2];
  local_38 = lVar14;
  if (puVar3 == (undefined4 *)0x0) goto LAB_1002faaa6;
  uVar19 = *param_2;
  uVar4 = param_2[1];
  uVar10 = FUN_1002adb30();
  uVar1 = *puVar3;
  iVar2 = puVar3[1];
  uVar15 = 0x80e1;
  if (iVar2 == 0x8814) {
    uVar15 = 0x1908;
  }
  uVar16 = 0x8367;
  if (iVar2 == 0x8814) {
    uVar16 = 0x1406;
  }
  lVar14 = *(long *)(puVar3 + 4);
  if ((lVar14 == 0) || ((lVar17 = *(long *)(puVar3 + 6), lVar17 == 0 && (param_3 == '\x01')))) {
    uVar13 = *(undefined8 *)PTR__kIOSurfaceWidth_100ba2490;
    uVar5 = *(undefined8 *)PTR__kIOSurfaceHeight_100ba2480;
    uVar6 = *(undefined8 *)PTR__kIOSurfaceBytesPerElement_100ba2478;
    uVar7 = *(undefined8 *)PTR__kIOSurfaceIsGlobal_100ba2488;
    local_48 = puVar3[2];
    local_44 = puVar3[3];
    local_40 = 0x10;
    if (puVar3[1] != 0x8814) {
      local_40 = 4;
    }
    local_3c = 1;
    uVar11 = _CFDictionaryCreateMutable
                       (0,0,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                        PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
    uVar12 = _CFNumberCreate(0,9,&local_48);
    _CFDictionarySetValue(uVar11,uVar13,uVar12);
    _CFRelease(uVar12);
    uVar13 = _CFNumberCreate(0,9,&local_44);
    _CFDictionarySetValue(uVar11,uVar5,uVar13);
    _CFRelease(uVar13);
    uVar13 = _CFNumberCreate(0,9,&local_40);
    _CFDictionarySetValue(uVar11,uVar6,uVar13);
    _CFRelease(uVar13);
    uVar13 = _CFNumberCreate(0,9,&local_3c);
    _CFDictionarySetValue(uVar11,uVar7,uVar13);
    _CFRelease(uVar13);
    if (*(long *)(puVar3 + 4) == 0) {
      uVar13 = _IOSurfaceCreate(uVar11);
      *(undefined8 *)(puVar3 + 4) = uVar13;
    }
    if ((*(long *)(puVar3 + 6) == 0) && (param_3 == '\x01')) {
      uVar13 = _IOSurfaceCreate(uVar11);
      *(undefined8 *)(puVar3 + 6) = uVar13;
    }
    _CFRelease(uVar11);
    lVar14 = *(long *)(puVar3 + 4);
    lVar17 = *(long *)(puVar3 + 6);
  }
  uVar8 = FUN_1003017c0(uVar4,uVar1,1);
  uVar9 = FUN_1003040c0(uVar4,0x88ec,1);
  (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x88ec,0);
  if ((lVar14 != 0) && (*(int *)((long)param_2 + 0x1c) == 0)) {
    (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,(undefined4 *)((long)param_2 + 0x1c));
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,uVar1,*(undefined4 *)((long)param_2 + 0x1c));
    (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,uVar1,0x2800,0x2600);
    (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,uVar1,0x2801,0x2600);
    lVar18 = lVar14;
    _CGLTexImageIOSurface2D(uVar19,uVar1,iVar2,puVar3[2],puVar3[3],uVar15,uVar16,lVar14,0);
    uVar20 = (undefined4)((ulong)lVar18 >> 0x20);
  }
  if (lVar17 == 0) {
    if (lVar14 != 0) goto LAB_1002fa80e;
  }
  else {
    if (*(int *)(param_2 + 4) == 0) {
      (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,param_2 + 4);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,uVar1,*(undefined4 *)(param_2 + 4));
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,uVar1,0x2800,0x2600);
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,uVar1,0x2801,0x2600);
      lVar18 = lVar17;
      _CGLTexImageIOSurface2D(uVar19,uVar1,iVar2,puVar3[2],puVar3[3],uVar15,uVar16,lVar17,0);
      uVar20 = (undefined4)((ulong)lVar18 >> 0x20);
    }
LAB_1002fa80e:
    iVar2 = *(int *)((long)param_2 + 0x24);
    if (iVar2 == 0) {
      (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,(int *)((long)param_2 + 0x24));
      iVar2 = *(int *)((long)param_2 + 0x24);
    }
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,uVar1,iVar2);
    (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,uVar1,0x2800,0x2600);
    (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,uVar1,0x2801,0x2600);
    uVar19 = CONCAT44(uVar20,0x84f9);
    (*(code *)DAT_1011c4a88[0x12e])
              (*DAT_1011c4a88,uVar1,0,0x88f0,puVar3[2],puVar3[3],0,uVar19,0x84fa,0);
    uVar20 = (undefined4)((ulong)uVar19 >> 0x20);
    if (param_4 != '\0') {
      iVar2 = *(int *)(param_2 + 5);
      if (iVar2 == 0) {
        (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,param_2 + 5);
        iVar2 = *(int *)(param_2 + 5);
      }
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,uVar1,iVar2);
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,uVar1,0x2800,0x2600);
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,uVar1,0x2801,0x2600);
      (*(code *)DAT_1011c4a88[0x12e])
                (*DAT_1011c4a88,uVar1,0,0x805b,puVar3[2],puVar3[3],0,CONCAT44(uVar20,0x80e1),0x1405,
                 0);
      *(undefined4 *)((long)param_2 + 0x34) = 0x8ce2;
    }
    iVar2 = *(int *)(param_2 + 3);
    if (iVar2 == 0) {
      (*DAT_1011c5e48)(1,param_2 + 3);
      iVar2 = *(int *)(param_2 + 3);
    }
    (*DAT_1011c5738)(0x8d40,iVar2);
    (*DAT_1011c5de8)(0x8ca9,0x8ce0,uVar1,*(undefined4 *)((long)param_2 + 0x1c),0);
    (*DAT_1011c5de8)(0x8ca9,0x8ce1,uVar1,*(undefined4 *)(param_2 + 4),0);
    (*DAT_1011c5de8)(0x8ca9,0x821a,uVar1,*(undefined4 *)((long)param_2 + 0x24),0);
    if (*(int *)((long)param_2 + 0x34) != 0) {
      (*DAT_1011c5de8)(0x8ca9,*(int *)((long)param_2 + 0x34),uVar1,*(undefined4 *)(param_2 + 5),0);
    }
    (*DAT_1011c5808)(0x8d40);
  }
  (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x88ec,uVar9);
  (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,uVar1,uVar8);
  *(undefined8 *)((long)param_2 + 0x2c) = 0x40400000404;
  if (lVar14 != 0) {
    *(undefined8 *)((long)param_2 + 0x2c) = 0x8ce000008ce0;
  }
  if (lVar17 != 0) {
    *(undefined4 *)(param_2 + 6) = 0x8ce1;
  }
  FUN_100301c10(uVar4);
  (*(code *)DAT_1011c4a88[0x5b])(*DAT_1011c4a88);
  FUN_1002adb30(param_1,uVar10);
  lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1002faaa6:
  if (lVar14 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

