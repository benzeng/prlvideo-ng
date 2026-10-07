
undefined1
FUN_1007529a0(long param_1,void *param_2,undefined8 param_3,uint param_4,uint *param_5,ulong param_6
             ,long param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  uint local_34;
  
  uVar2 = *param_5;
  local_34 = uVar2;
  if (param_7 == 0) {
    uVar2 = *(int *)(param_1 + 0x58) - 1;
    if (uVar2 < 5) {
      pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)uVar2];
    }
    else {
      pcVar9 = "invalid";
    }
    pcVar4 = "CCompressionEngineLZRW::do_uncompress(%s) zero context";
LAB_100752a7a:
    uVar6 = 0;
    uVar5 = 0;
LAB_100752a7e:
    FUN_1008e3970("","Compression",uVar5,pcVar4,pcVar9);
    return uVar6;
  }
  if ((param_4 == 0) || (uVar2 == 0)) {
    FUN_1008e3970("","Compression",0,
                  "CCompressionEngineLZRW::do_uncompress(%u,%u) incorrect arguments!",param_4,uVar2)
    ;
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x58);
  if (lVar3 == 0) {
    if (iVar1 == 5) {
      local_34 = FUN_10074acf0(param_2,param_3,param_4,uVar2);
      uVar2 = (uint)(local_34 == 0);
      goto LAB_100752cd0;
    }
    if (iVar1 == 4) {
      uVar2 = FUN_100744610(param_2,param_4,param_3,&local_34);
      goto LAB_100752cd0;
    }
    uVar2 = 1;
    if (iVar1 != 1) goto LAB_100752cd0;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uVar11 = 0xc5b;
    if (iVar1 != 1) {
      if (iVar1 == 5) {
        uVar11 = 0x101a;
      }
      else if (iVar1 == 4) {
        uVar11 = 0xbf1;
      }
      else {
        if (iVar1 - 1U < 5) {
          pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)(iVar1 - 1U)];
        }
        else {
          pcVar9 = "invalid";
        }
        uVar11 = 0;
        FUN_1008e3970("","Compression",0,"CCompressionEngineLZRW::get_1mz_comp_siz(%s)",pcVar9);
        lVar3 = *(long *)(param_1 + 0x60);
      }
    }
    uVar10 = (ulong)param_4;
    puVar8 = (undefined8 *)(param_7 + 0x8000);
    *(ulong *)(param_7 + 0x8000) = lVar3 + (param_6 >> 0x11) * 4;
    if (uVar11 == param_4) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 1) {
        puVar7 = &DAT_10119ea80;
      }
      else if (iVar1 == 5) {
        puVar7 = &DAT_1011a02e0;
      }
      else if (iVar1 == 4) {
        puVar7 = &DAT_10119f6e0;
      }
      else {
        if (iVar1 - 1U < 5) {
          pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)(iVar1 - 1U)];
        }
        else {
          pcVar9 = "invalid";
        }
        FUN_1008e3970("","Compression",0,"CCompressionEngineLZRW::get_1mz_comp_stream(%s)",pcVar9);
        puVar7 = (undefined *)0x0;
      }
      iVar1 = _memcmp(param_2,puVar7,uVar10);
      if (iVar1 == 0) {
        if (0xfffff < *param_5) {
          *param_5 = 0x100000;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x100;
          puVar8 = (undefined8 *)*puVar8;
          puVar8[3] = 0xffffffffffffffff;
          puVar8[2] = 0xffffffffffffffff;
          puVar8[1] = 0xffffffffffffffff;
          *puVar8 = 0xffffffffffffffff;
          uVar6 = 1;
          if (DAT_1011b55f8 < 4) {
            return 1;
          }
          uVar2 = *(int *)(param_1 + 0x58) - 1;
          if (uVar2 < 5) {
            pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)uVar2];
          }
          else {
            pcVar9 = "invalid";
          }
          pcVar4 = "CCompressionEngineLZRW::do_uncompress(%s) skip entire block";
          uVar5 = 4;
          goto LAB_100752a7e;
        }
        uVar2 = *(int *)(param_1 + 0x58) - 1;
        if (uVar2 < 5) {
          pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)uVar2];
        }
        else {
          pcVar9 = "invalid";
        }
        pcVar4 = "CCompressionEngineLZRW::do_uncompress(%s) invalid buffer";
        goto LAB_100752a7a;
      }
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 5) {
      local_34 = FUN_10074acf0(param_2,param_3,uVar10,uVar2);
      uVar2 = (uint)(local_34 == 0);
      goto LAB_100752cd0;
    }
    if (iVar1 == 4) {
      uVar2 = FUN_1007451b0(param_2,uVar10,param_3,&local_34);
      goto LAB_100752cd0;
    }
    uVar2 = 1;
    if (iVar1 != 1) goto LAB_100752cd0;
  }
  uVar2 = FUN_100743930(param_2,param_4,param_3,&local_34,puVar8);
LAB_100752cd0:
  uVar11 = *param_5;
  if (uVar11 < local_34) {
    uVar2 = *(int *)(param_1 + 0x58) - 1;
    if (uVar2 < 5) {
      pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)uVar2];
    }
    else {
      pcVar9 = "invalid";
    }
    pcVar4 = "CCompressionEngineLZRW::do_uncompress(%s,%llu,%u,%u,%u) buffer overflow!";
  }
  else if (local_34 == 0) {
    uVar2 = *(int *)(param_1 + 0x58) - 1;
    if (uVar2 < 5) {
      pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)uVar2];
    }
    else {
      pcVar9 = "invalid";
    }
    pcVar4 = "CCompressionEngineLZRW::do_compress(%s,%llu,%u,%u) uncomp size = zero!";
  }
  else {
    *param_5 = local_34;
    if (uVar2 == 0) {
      if (3 < DAT_1011b55f8) {
        uVar2 = *(int *)(param_1 + 0x58) - 1;
        if (uVar2 < 5) {
          pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)uVar2];
        }
        else {
          pcVar9 = "invalid";
        }
        FUN_1008e3970("","Compression",4,"CCompressionEngineLZRW::do_uncompress(%s) %u -> %u",pcVar9
                      ,param_4,local_34);
      }
      if (*(long *)(param_1 + 0x60) == 0) {
        return 1;
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_7 + 0x8008);
      return 1;
    }
    uVar2 = *(int *)(param_1 + 0x58) - 1;
    if (uVar2 < 5) {
      pcVar9 = (&PTR_s_lzrw1_100bcec20)[(int)uVar2];
    }
    else {
      pcVar9 = "invalid";
    }
    pcVar4 = "CCompressionEngineLZRW::do_uncompress(%s,%llu,%u->%u) failed (%d)";
    uVar11 = local_34;
  }
  FUN_1008e3970("","Compression",0,pcVar4,pcVar9,param_6,param_4,uVar11);
  return 0;
}

