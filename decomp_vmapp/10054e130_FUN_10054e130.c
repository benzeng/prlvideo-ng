
undefined1 FUN_10054e130(long param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  undefined1 uVar7;
  int local_94;
  ushort *local_90;
  ushort *local_88;
  ushort *local_80;
  undefined4 local_78;
  char local_74;
  undefined8 local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_80 = param_2 + 0x200000;
  local_78 = 0x40;
  local_74 = '\x01';
  local_90 = param_2;
  local_88 = param_2;
  local_38 = lVar2;
  cVar3 = FUN_100551730(&local_90);
  if (cVar3 == '\0') {
    pcVar5 = "CGuestMemoryCompressor::upack_v2_buffer() invalid data";
  }
  else {
    do {
      if (local_74 == '\0') goto LAB_10054e324;
      if ((local_88 < local_80) && (*local_88 != 0)) {
        if ((*(long *)(param_3 + 0x20) == 0) ||
           (pvVar6 = (void *)(*(long *)(param_3 + 0x20) + (ulong)*(uint *)(local_88 + 2) * 0x1000),
           pvVar6 == (void *)0x0)) {
          pcVar5 = "CGuestMemoryCompressor::upack_v2_buffer() failed to get memory pointer";
        }
        else {
          local_68 = 0x4d430002;
          local_58 = 0x1000;
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          local_70 = 0;
          uVar1 = *local_88;
          local_60 = pvVar6;
          if (uVar1 == 0x1004) {
            _memcpy(pvVar6,local_88 + 4,0x1000);
            goto LAB_10054e2e0;
          }
          local_94 = 0x1000;
          if (3 < uVar1) {
            cVar3 = *(char *)(*(long *)(param_1 + 0x28) + 2);
            if (cVar3 == '\x03') {
              iVar4 = FUN_100744610(local_88 + 4,uVar1 - 4,pvVar6,&local_94);
LAB_10054e2b8:
              if (iVar4 == 0) {
                if (local_94 == 0x1000) goto LAB_10054e2e0;
                goto LAB_10054e3a6;
              }
              cVar3 = *(char *)(*(long *)(param_1 + 0x28) + 2);
            }
            else {
              if (cVar3 == '\x02') {
                iVar4 = FUN_100743930(local_88 + 4,uVar1 - 4,pvVar6,&local_94,0);
                goto LAB_10054e2b8;
              }
              iVar4 = 1;
            }
            FUN_1008e3970("","TransMem",0,
                          "CGuestMemoryCompressor::uncompress_buffer(type=%d) failed (%d)",cVar3,
                          iVar4);
          }
LAB_10054e3a6:
          pcVar5 = "CGuestMemoryCompressor::upack_v2_buffer() compressed page is corrupt";
        }
        goto LAB_10054e339;
      }
LAB_10054e2e0:
      if (local_74 == '\0') goto LAB_10054e324;
    } while (((local_88 < local_80) && (FUN_100551700(&local_90), local_88 < local_80)) &&
            (cVar3 = FUN_100551730(&local_90), cVar3 != '\0'));
    if ((local_74 != '\0') && (uVar7 = 1, local_80 <= local_88)) goto LAB_10054e344;
LAB_10054e324:
    pcVar5 = "CGuestMemoryCompressor::upack_v2_buffer() the data is corrupt";
  }
LAB_10054e339:
  uVar7 = 0;
  FUN_1008e3970("","TransMem",0,pcVar5);
LAB_10054e344:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

