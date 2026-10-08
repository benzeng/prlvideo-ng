
void FUN_1003335e0(long param_1)

{
  QImage local_38 [32];
  
  (**(code **)(param_1 + 0x40))(local_38,param_1 + 0x48,param_1 + 0x58,param_1 + 0x60);
  QImage::operator=((QImage *)(param_1 + 0x20),local_38);
  QImage::~QImage(local_38);
  return;
}

