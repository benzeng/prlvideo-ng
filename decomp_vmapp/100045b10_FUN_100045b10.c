
undefined1 FUN_100045b10(long param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *pvVar5;
  undefined1 uVar6;
  ulong uVar7;
  bool bVar8;
  undefined4 local_4c;
  void *local_38;
  
  QMutex::lock();
  lVar2 = *(long *)(param_1 + 0x160);
  if (lVar2 == 0) {
    local_4c = 0;
    bVar4 = false;
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x168);
    uVar1 = *(uint *)(param_1 + 0x170);
    uVar7 = (ulong)(uint)param_2[4] + 0x14;
    if (uVar1 < uVar7) {
      if ((((puVar3[3] & 8) != 0) && (0x17 < uVar1)) && ((param_2[3] & 8) == 0)) {
        puVar3[1] = 2;
        *puVar3 = 0x7e;
        puVar3[2] = 0;
        puVar3[3] = 8;
        puVar3[4] = 4;
        puVar3[5] = param_2[4] + 0x14;
        goto LAB_100045bf9;
      }
      local_4c = 0xf0000009;
      if (DAT_1011b55f8 < 1) {
        bVar8 = false;
      }
      else {
        bVar8 = false;
        FUN_1008e3970("SGAH","vm",1,
                      "Pending command %i has %u bytes of data, but supplied buffer from guest is only %u bytes (flags=0x%x)"
                      ,*param_2,(ulong)(uint)param_2[4],uVar1,puVar3[3]);
      }
    }
    else {
      _memcpy(puVar3,param_2,uVar7);
LAB_100045bf9:
      bVar8 = **(int **)(param_1 + 0x168) == 0x7e;
      local_4c = FUN_1000455e0();
    }
    _free(*(void **)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    bVar4 = true;
    if (!bVar8) {
      QMutex::unlock();
      uVar6 = 1;
      goto LAB_100045d42;
    }
  }
  uVar7 = (ulong)(param_2[4] + 0x14);
  pvVar5 = _malloc(uVar7);
  local_38 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    if (DAT_1011b55f8 < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_1008e3970("SGAH","vm",1,"malloc() err, sz=%u",uVar7);
    }
  }
  else {
    _memcpy(pvVar5,param_2,uVar7);
    if (bVar4) {
      *(byte *)((long)pvVar5 + 0xc) = *(byte *)((long)pvVar5 + 0xc) | 8;
    }
    FUN_100046800(param_1 + 0x150,&local_38);
    uVar6 = 1;
  }
  QMutex::unlock();
  if (lVar2 == 0) {
    return uVar6;
  }
LAB_100045d42:
  FUN_1004c07d0(param_1 + 0x10,lVar2,local_4c);
  return uVar6;
}

