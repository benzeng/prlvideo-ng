
void FUN_100360640(void)

{
  undefined8 local_20;
  QPoint local_18 [16];
  
  local_18 = (QPoint  [16])FUN_100360410();
  local_20 = QCursor::pos();
  QRect::contains(local_18,SUB81(&local_20,0));
  return;
}

