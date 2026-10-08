
void FUN_100183da0(long param_1)

{
  QPointF *pQVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  double local_48;
  double dStack_40;
  
  local_80 = &local_78;
  local_70 = 0;
  local_78 = 0;
  local_68 = &local_60;
  local_58 = 0;
  local_60 = 0;
  local_50 = PTR_shared_null_1021e15e8;
  puVar6 = (undefined8 *)0x0;
  iVar7 = -1;
  iVar5 = 0;
  do {
    iVar4 = FUN_100184b10();
    if ((iVar4 < 2) || (iVar7 = iVar7 + 1, 0x62 < iVar7)) {
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete(puVar6);
      }
      FUN_100186040(&local_80);
      return;
    }
    puVar8 = puVar6;
    if (iVar4 != iVar5) {
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete(puVar6);
      }
      iVar5 = FUN_100184d10(&local_80,param_1 + 0x10);
      puVar8 = (undefined8 *)0x0;
    }
    FUN_100185510(&local_80);
    puVar6 = (undefined8 *)FUN_100185c50(&local_80,puVar8);
    if ((puVar6 != (undefined8 *)0x0) && (pQVar1 = (QPointF *)*puVar6, pQVar1 != (QPointF *)0x0)) {
      dVar2 = (double)puVar6[1];
      dVar3 = (double)puVar6[2];
      if (dVar2 == DAT_100e150e0) {
        if ((dVar3 == DAT_100e150e0) && (!NAN(dVar3) && !NAN(DAT_100e150e0))) goto LAB_100183f00;
      }
      dVar10 = dVar2;
      dVar9 = (double)QGraphicsItem::pos();
      QGraphicsItem::pos();
      local_48 = dVar9 - dVar2;
      dStack_40 = dVar10 - dVar3;
      QGraphicsItem::setPos(pQVar1);
    }
LAB_100183f00:
    if (puVar8 != (undefined8 *)0x0) {
      operator_delete(puVar8);
    }
  } while( true );
}

