
undefined1 FUN_100468770(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  QArrayData *local_88;
  undefined1 local_80 [8];
  void *local_78;
  void *local_70;
  string local_58 [47];
  undefined1 local_29;
  
  lVar1 = *(long *)(*(long *)(*param_3 + 0x10) + 0x80);
  puVar6 = (undefined4 *)0x0;
  if (lVar1 != 0) {
    puVar6 = *(undefined4 **)(lVar1 + 0x10);
  }
  uVar4 = (ulong)*(uint *)(*(long *)(*param_3 + 0x10) + 0x8c);
  if ((0xb < uVar4) && ((ulong)(uint)puVar6[2] + 0xc <= uVar4)) {
    lVar5 = 0;
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + 0x10);
    }
    cVar2 = FUN_100469d10(*puVar6,lVar5 + 0xc);
    if (cVar2 != '\0') {
      lVar1 = *(long *)(*(long *)(*param_3 + 0x10) + 0x80);
      lVar5 = 0;
      if (lVar1 != 0) {
        lVar5 = *(long *)(lVar1 + 0x10);
      }
      FUN_100469ee0(local_80,*puVar6,1,lVar5 + 0xc);
      local_88 = (QArrayData *)*param_2;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
      }
      uVar3 = FUN_100468940(param_1,local_80,&local_88);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100468868;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100468868:
      std::string::~string(local_58);
      if (local_78 == (void *)0x0) {
        return uVar3;
      }
      if (local_70 != local_78) {
        local_70 = local_78;
      }
      operator_delete(local_78);
      return uVar3;
    }
  }
  return 0;
}

