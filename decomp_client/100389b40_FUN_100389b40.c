
void FUN_100389b40(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  QGraphicsView::scene();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220f3d0);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (0xffffff < iVar1) {
      if (iVar1 < 0x1000012) {
        switch(iVar1) {
        case 0x1000000:
          FUN_1003875d0(lVar2);
          return;
        case 0x1000001:
          uVar4 = 1;
          break;
        case 0x1000002:
          uVar4 = 0;
          break;
        default:
          goto switchD_100389b99_caseD_1000003;
        case 0x1000004:
        case 0x1000005:
          goto switchD_100389b99_caseD_1000004;
        }
        uVar3 = 1;
      }
      else if (iVar1 == 0x1000012) {
        uVar4 = 0;
        uVar3 = 0;
      }
      else {
        if (iVar1 != 0x1000014) {
          if (iVar1 != 0x1000023) {
            return;
          }
          FUN_100386020(lVar2,1);
          return;
        }
        uVar4 = 1;
        uVar3 = 0;
      }
      FUN_1003881d0(lVar2,uVar4,uVar3);
      return;
    }
    if (iVar1 == 0x20) {
switchD_100389b99_caseD_1000004:
      FUN_1003883c0(lVar2,1);
      return;
    }
  }
switchD_100389b99_caseD_1000003:
  return;
}

