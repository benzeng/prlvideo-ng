
int FUN_10071bfa0(long *param_1,char *param_2,size_t param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  bool bVar12;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_6c = 0;
  if ((int)param_3 < 1) {
    param_3 = _strlen(param_2);
  }
  iVar4 = (int)param_3;
  if (iVar4 < 0x45) {
    puVar7 = (undefined8 *)FUN_100723d00(param_2,(long)iVar4);
    puVar2 = PTR___DefaultRuneLocale_100ba20c0;
    if ((puVar7 == (undefined8 *)0x0) || ((long)(param_2 + ((long)iVar4 - (long)puVar7)) < 0x22)) {
      iVar4 = FUN_10071e690(0xfffffff4,0);
      goto LAB_10071c1da;
    }
    local_48 = *(undefined2 *)(puVar7 + 4);
    local_50 = puVar7[3];
    local_58 = puVar7[2];
    local_60 = puVar7[1];
    local_68 = *puVar7;
    local_46 = 0;
    lVar9 = 0;
    do {
      cVar3 = *(char *)((long)&local_68 + lVar9);
      uVar11 = (ulong)cVar3;
      if ((long)uVar11 < 0) {
        uVar5 = ___maskrune((int)cVar3,0x1000);
      }
      else {
        uVar5 = *(uint *)(puVar2 + uVar11 * 4 + 0x3c) & 0x1000;
      }
      if (uVar5 != 0) {
        uVar5 = ___toupper((int)cVar3);
        uVar11 = (ulong)uVar5;
      }
      cVar3 = '0';
      if (((uint)uVar11 & 0xff) != 0x4f) {
        cVar3 = (char)uVar11;
      }
      *(char *)((long)&local_68 + lVar9) = cVar3;
      if ((cVar3 == 'I') || (cVar3 == 'L')) {
        *(undefined1 *)((long)&local_68 + lVar9) = 0x31;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x22);
    iVar4 = FUN_10071a230(param_1,&local_68,0x22,0,0,&local_6c);
    if (iVar4 != 0) goto LAB_10071c1da;
    bVar12 = local_6c == 0;
  }
  else {
    iVar4 = FUN_100719120(param_1,param_2,param_3,0);
    bVar12 = true;
    if (iVar4 != 0) goto LAB_10071c1da;
  }
  iVar4 = 0;
  if ((long *)*param_1 != param_1) {
    iVar4 = 0;
    plVar10 = (long *)*param_1;
    do {
      if ((*(byte *)((long)plVar10 + 0x1d4) & 0x10) != 0) break;
      plVar1 = (long *)*plVar10;
      iVar6 = FUN_100719f00(plVar10);
      if (iVar6 == 0) {
        iVar6 = FUN_1007199e0(plVar10,bVar12);
        if (iVar6 != 0) {
          FUN_100719320(param_1);
          iVar4 = iVar6;
          break;
        }
      }
      else {
        *(undefined4 *)(plVar10 + 0x3b) = 1;
        plVar10[0x3c] = (long)PTR_s_INVALID_10116e5d8;
        uVar8 = FUN_100722f30(0xf);
        ___snprintf_chk(plVar10 + 0x3d,0x7e,0,0xffffffffffffffff,"%s",uVar8);
        *(byte *)(plVar10 + 3) = *(byte *)(plVar10 + 3) | 2;
      }
      plVar10 = plVar1;
    } while (plVar1 != param_1);
  }
LAB_10071c1da:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

