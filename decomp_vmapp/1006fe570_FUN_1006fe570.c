
void FUN_1006fe570(long param_1)

{
  long lVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  tm *ptVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  tm local_88;
  long local_50;
  undefined1 local_46 [9];
  undefined1 local_3d [9];
  char local_34 [12];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  uVar3 = FUN_1006fff50();
  puVar7 = (undefined8 *)_getpwuid(uVar3);
  if (puVar7 == (undefined8 *)0x0) {
    ___snprintf_chk(local_3d,9,0,9,"%d",uVar3);
  }
  else {
    ___strlcpy_chk(local_3d,*puVar7,9,9);
  }
  uVar3 = FUN_1006fffb0(param_1);
  puVar7 = (undefined8 *)_getgrgid(uVar3);
  if (puVar7 == (undefined8 *)0x0) {
    ___snprintf_chk(local_46,9,0,9,"%d",uVar3);
  }
  else {
    ___strlcpy_chk(local_46,*puVar7,9,9);
  }
  uVar2 = FUN_100700010(param_1);
  _strmode((uint)uVar2,local_34);
  _printf("%.10s %-8.8s %-8.8s ",local_34,local_3d,local_46);
  if (*(char *)(param_1 + 0xbc) == '3') {
LAB_1006fe6ac:
    uVar4 = FUN_1006fe320(param_1 + 0x169);
    uVar5 = FUN_1006fe320(param_1 + 0x171);
    _printf(" %3d, %3d ",(ulong)uVar4,(ulong)uVar5);
  }
  else {
    uVar4 = FUN_1006fe320(param_1 + 0x84);
    if ((((uVar4 & 0xf000) == 0x2000) || (*(char *)(param_1 + 0xbc) == '4')) ||
       (uVar4 = FUN_1006fe320(param_1 + 0x84), (uVar4 & 0xf000) == 0x6000)) goto LAB_1006fe6ac;
    iVar6 = FUN_1006fe320(param_1 + 0x9c);
    _printf("%9ld ",(long)iVar6);
  }
  iVar6 = FUN_1006fe320(param_1 + 0xa8);
  local_50 = (long)iVar6;
  ptVar8 = _localtime_r(&local_50,&local_88);
  _printf("%.3s %2d %2d:%02d %4d",(&PTR_s_Jan_100bcdb10)[ptVar8->tm_mon],
          (ulong)(uint)ptVar8->tm_mday,(ulong)(uint)ptVar8->tm_hour,(ulong)(uint)ptVar8->tm_min,
          (ulong)(ptVar8->tm_year + 0x76c));
  uVar9 = FUN_1006ffe90(param_1);
  _printf(" %s",uVar9);
  if (*(char *)(param_1 + 0xbc) == '2') {
LAB_1006fe798:
    pcVar10 = " -> ";
  }
  else {
    uVar4 = FUN_1006fe320(param_1 + 0x84);
    if ((uVar4 & 0xf000) == 0xa000) {
      if (*(char *)(param_1 + 0xbc) == '2') goto LAB_1006fe798;
    }
    else if (*(char *)(param_1 + 0xbc) != '1') goto LAB_1006fe7dc;
    uVar4 = FUN_1006fe320(param_1 + 0x84);
    if ((uVar4 & 0xf000) == 0xa000) goto LAB_1006fe798;
    pcVar10 = " link to ";
  }
  _printf(pcVar10);
  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) || (lVar11 = *(long *)(param_1 + 0x228), lVar11 == 0))
  {
    lVar11 = param_1 + 0xbd;
    pcVar10 = "%.100s";
  }
  else {
    pcVar10 = "%s";
  }
  _printf(pcVar10,lVar11);
LAB_1006fe7dc:
  _putchar(10);
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

