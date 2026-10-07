
undefined1 FUN_100553ca0(ushort *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  char *pcVar11;
  uint *puVar12;
  undefined1 uVar13;
  size_t sVar14;
  uint uVar15;
  long lVar16;
  uint local_48;
  
  uVar1 = *param_1;
  iVar5 = 1;
  if (uVar1 < 0x201) {
    iVar5 = *(int *)(param_1 + 0x12);
  }
  puVar12 = (uint *)(param_1 + 8);
  if (0x200 < uVar1) {
    puVar12 = (uint *)(param_1 + 0xe);
  }
  if (uVar1 == 0) {
    return 1;
  }
  lVar16 = ((ulong)*puVar12 + (ulong)(uint)(iVar5 * *(int *)(param_1 + 6))) * 0x1000;
  if (uVar1 == 1) {
    uVar2 = *(uint *)(param_1 + 4);
    lVar6 = FUN_100554310(param_1);
    sVar14 = (size_t)(int)(uVar2 * 4 + 0x103f & 0xfffff000);
    puVar7 = _valloc(sVar14);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[7] = *(undefined8 *)(param_1 + 0x1c);
      puVar7[6] = *(undefined8 *)(param_1 + 0x18);
      puVar7[5] = *(undefined8 *)(param_1 + 0x14);
      puVar7[4] = *(undefined8 *)(param_1 + 0x10);
      puVar7[3] = *(undefined8 *)(param_1 + 0xc);
      puVar7[2] = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined8 *)param_1;
      puVar7[1] = *(undefined8 *)(param_1 + 4);
      *puVar7 = uVar3;
      _memcpy(puVar7 + 8,*(void **)(param_1 + 0x20),(ulong)uVar2 << 2);
      lVar8 = FUN_1007616e0(param_2,lVar16,0);
      if ((lVar8 == lVar16) &&
         (sVar9 = FUN_100761880(param_2,FUN_100761810,0,puVar7,sVar14), sVar9 == sVar14)) {
        cVar4 = FUN_100761740(param_2,(int)(uVar2 * 4 + 0x40) + lVar6);
        uVar13 = 1;
        if (cVar4 != '\0') goto LAB_100553e17;
      }
      uVar13 = 0;
      FUN_1008e3970("","TransMem",0,"ss_save() failed to write storage descriptor v1");
LAB_100553e17:
      _free(puVar7);
      return uVar13;
    }
    pcVar11 = "ss_save() failed to allocate buffer";
    goto LAB_100554031;
  }
  if (uVar1 != 0x201) {
    FUN_1008e3970("","TransMem",0,"ss_save() unsupported version=%x");
    return 0;
  }
  lVar6 = FUN_100554310(param_1);
  uVar2 = *(int *)(param_1 + 4) * 4 + 0xfff;
  local_48 = uVar2 & 0xfffff000;
  uVar15 = (*(int *)(param_1 + 4) * *(int *)(param_1 + 0x12) + 0x1fU >> 5) * 4 + 0xfff & 0x3ffff000;
  if ((param_3 == (code *)0x0) ||
     ((cVar4 = (*param_3)(param_4,*(undefined8 *)(param_1 + 0x20),uVar2 & 0xfffff000,1),
      cVar4 != '\0' &&
      (cVar4 = (*param_3)(param_4,*(undefined8 *)(param_1 + 0x24),uVar15,1), cVar4 != '\0')))) {
    lVar8 = FUN_1007616e0(param_2,lVar16,0);
    if (lVar8 == lVar16) {
      lVar8 = (long)(int)local_48;
      lVar16 = FUN_100761880(param_2,FUN_100761810,0,*(undefined8 *)(param_1 + 0x20),lVar8);
      if ((lVar16 == lVar8) &&
         (uVar10 = FUN_100761880(param_2,FUN_100761810,0,*(undefined8 *)(param_1 + 0x24),
                                 (ulong)uVar15), uVar10 == uVar15)) {
        if (*(char *)((long)param_1 + 3) != '\0') {
          if ((param_3 != (code *)0x0) &&
             (cVar4 = (*param_3)(param_4,*(undefined8 *)(param_1 + 0x28),uVar2 & 0xfffff000,1),
             cVar4 == '\0')) goto LAB_100554005;
          lVar16 = FUN_100761880(param_2,FUN_100761810,0,*(undefined8 *)(param_1 + 0x28),lVar8);
          if (lVar16 != lVar8) {
            pcVar11 = "ss_save() failed to write compressed block size table";
            goto LAB_100554031;
          }
        }
        if ((param_3 == (code *)0x0) || (cVar4 = (*param_3)(param_4,param_1,0x40,1), cVar4 != '\0'))
        {
          lVar16 = FUN_100761880(param_2,FUN_100761810,0,param_1,0x1000);
          if ((lVar16 == 0x1000) && (cVar4 = FUN_100761740(param_2,lVar6 + 0x40), cVar4 != '\0')) {
            return 1;
          }
          pcVar11 = "ss_save() failed to write storage descriptor v2.1";
          goto LAB_100554031;
        }
        goto LAB_100554005;
      }
    }
    pcVar11 = "ss_save() failed to write storage map v2.1";
  }
  else {
LAB_100554005:
    pcVar11 = "ss_save() cancelled";
  }
LAB_100554031:
  FUN_1008e3970("","TransMem",0,pcVar11);
  return 0;
}

