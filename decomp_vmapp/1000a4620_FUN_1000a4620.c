
undefined1 FUN_1000a4620(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  QFileInfo local_28 [15];
  undefined1 local_19;
  
  QFileInfo::QFileInfo(local_28,(QString *)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 8));
  QFileInfo::absolutePath();
  QFileInfo::~QFileInfo(local_28);
  uVar3 = FUN_100769600(&local_30);
  uVar1 = *(uint *)(param_1 + 0x109c0);
  uVar2 = *(ulong *)(param_1 + 0x109b8);
  if (uVar3 < uVar1 * uVar2) {
    if (((uVar1 != 10) && (uVar1 != 0x3c)) ||
       (*(undefined4 *)(param_1 + 0x109c0) = 1, uVar3 < uVar2)) {
      QString::toUtf8();
      FUN_1008e3970("","vm",0,"Low free HDD space detected %lluMb, (%s)",uVar3 >> 0x14,
                    local_38 + *(long *)(local_38 + 0x10));
      uVar4 = 1;
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_19 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1000a478a;
        }
        QArrayData::deallocate(local_38,1,8);
      }
      goto LAB_1000a478a;
    }
  }
  else if (uVar1 == 10) {
    if (uVar2 * 0x3c <= uVar3) {
      *(undefined4 *)(param_1 + 0x109c0) = 0x3c;
    }
  }
  else if ((uVar1 != 0x3c) && (uVar2 * 10 <= uVar3)) {
    *(undefined4 *)(param_1 + 0x109c0) = 10;
    uVar4 = 0;
    goto LAB_1000a478a;
  }
  uVar4 = 0;
LAB_1000a478a:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar4;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar4;
}

