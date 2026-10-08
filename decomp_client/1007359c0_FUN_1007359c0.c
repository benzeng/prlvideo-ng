
void FUN_1007359c0(long param_1,int param_2)

{
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x28) != param_2) {
    *(int *)(*(long *)(param_1 + 0x30) + 0x28) = param_2;
    FUN_100856ff0(param_1);
    QGraphicsItem::update((QRectF *)(param_1 + 0x10));
  }
  return;
}

