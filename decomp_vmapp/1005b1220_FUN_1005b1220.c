
undefined8 FUN_1005b1220(long param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  char local_79;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 ***local_50;
  undefined8 ***local_48;
  uint local_40;
  uint local_34;
  
  if (param_2 == (code *)0x0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","cb != NULL","BlockGroup.cpp",
                  0x697,"Scan");
  }
  local_58 = 0;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_40 = 0xffffffff;
  local_50 = &local_50;
  uVar1 = (ulong)*(uint *)(param_1 + 200) / (ulong)*(uint *)(param_1 + 0xc4);
  local_48 = local_50;
  local_78 = operator_new__(uVar1 * 0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (local_78 == (undefined8 *)0x0) {
    local_78 = (undefined8 *)0x0;
    FUN_1008e3970("","vdisk",0,"Memory allocation failed.");
    uVar6 = 0x80021020;
  }
  else {
    if ((int)uVar1 != 0) {
      puVar4 = local_78;
      do {
        puVar4[1] = 0xffffffffffffffff;
        *puVar4 = 0xffffffffffffffff;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4 = puVar4 + 4;
      } while (puVar4 != local_78 + uVar1 * 4);
    }
    if (*(int *)(param_1 + 0xd4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      do {
        if ((*(int *)(param_1 + 0x30) != -1) && (lVar3 = *(long *)(param_1 + 0x10b8), lVar3 != 0)) {
          if (*(uint *)(param_1 + 0x10b0) <= uVar5) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                          "BlockGroup.cpp",0x3f6,"isSet");
            lVar3 = *(long *)(param_1 + 0x10b8);
          }
          if ((*(uint *)(lVar3 + (ulong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
            local_34 = 0;
            uVar1 = ((ulong)*(uint *)(param_1 + 0xcc) - 1) +
                    (ulong)(uVar5 * *(int *)(param_1 + 200)) + *(long *)(param_1 + 0x10c0);
            local_40 = uVar5;
            cVar2 = FUN_100707fb0(param_1 + 0x28,local_78,*(int *)(param_1 + 200),&local_34,
                                  uVar1 - uVar1 % (ulong)*(uint *)(param_1 + 0xcc));
            if ((cVar2 == '\0') || (local_34 != *(uint *)(param_1 + 200))) {
              FUN_1008e3970("","vdisk",0,"Unable to read group[%u] (read %u, expected %u), err = %u"
                            ,local_40,local_34,*(uint *)(param_1 + 200),
                            *(undefined4 *)(param_1 + 0x3c));
              FUN_1008e3970("","vdisk",0,"Load group %u of %u failed",uVar5,
                            *(undefined4 *)(param_1 + 0xd4));
              uVar6 = 0x80021000;
              break;
            }
            local_79 = '\0';
            cVar2 = (*param_2)(local_78,(ulong)local_34 / (ulong)*(uint *)(param_1 + 0xc4),uVar5,
                               param_3,&local_79);
            if (cVar2 == '\0') {
              FUN_1008e3970("","vdisk",0,"Interrupted scan for group %u of %u",uVar5,
                            *(undefined4 *)(param_1 + 0xd4));
              uVar6 = 0x80021036;
              break;
            }
            if ((local_79 != '\0') && (cVar2 = FUN_1005ab890(param_1,&local_78), cVar2 == '\0')) {
              FUN_1008e3970("","vdisk",0,"Write group %u of %u failed",uVar5,
                            *(undefined4 *)(param_1 + 0xd4));
              uVar6 = 0x80021027;
              break;
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0xd4));
    }
    if (local_78 != (undefined8 *)0x0) {
      operator_delete__(local_78);
    }
  }
  return uVar6;
}

