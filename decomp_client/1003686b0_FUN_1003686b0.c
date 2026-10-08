
void FUN_1003686b0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QRegion *pQVar4;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  int in_stack_00000018;
  QRegion local_58 [8];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    uVar3 = FUN_100323e00();
    uVar3 = FUN_100319c50(uVar3);
    cVar1 = FUN_100330a50(uVar3);
    if (cVar1 == '\0') {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      iVar2 = FUN_100323e20(uVar3);
      if ((in_stack_00000018 == iVar2) &&
         (pQVar4 = (QRegion *)FUN_100379860(*(undefined8 *)(param_1 + 0x20)),
         pQVar4 != (QRegion *)0x0)) {
        WidgetUtils::getWidgetTransformMatrix((QWidget *)&local_50);
        local_50 = local_50 + DAT_100e110e0;
        if (local_50 < 0.0) {
          local_50 = (double)((ulong)local_50 ^ DAT_100e14fe0);
        }
        if (local_50 <= DAT_100e190e8) {
          local_38 = local_38 + DAT_100e110e0;
          if (local_38 < 0.0) {
            local_38 = (double)((ulong)local_38 ^ DAT_100e14fe0);
          }
          if (local_38 <= DAT_100e190e8) {
            if (local_48 < 0.0) {
              local_48 = (double)((ulong)local_48 ^ DAT_100e14fe0);
            }
            if (local_48 <= DAT_100e190e8) {
              if (local_40 < 0.0) {
                local_40 = (double)((ulong)local_40 ^ DAT_100e14fe0);
              }
              if (local_40 <= DAT_100e190e8) {
                if (local_30 < 0.0) {
                  local_30 = (double)((ulong)local_30 ^ DAT_100e14fe0);
                }
                if (local_30 <= DAT_100e190e8) {
                  if (local_28 < 0.0) {
                    local_28 = (double)((ulong)local_28 ^ DAT_100e14fe0);
                  }
                  if (local_28 <= DAT_100e190e8) {
                    QRegion::QRegion(local_58,in_stack_00000008,in_stack_00000008 >> 0x20,
                                     in_stack_00000010,in_stack_00000010 >> 0x20,0);
                    QWidget::update(pQVar4);
                    QRegion::~QRegion(local_58);
                    return;
                  }
                }
              }
            }
          }
        }
        QWidget::update();
      }
    }
  }
  return;
}

