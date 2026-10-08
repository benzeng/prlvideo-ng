
void FUN_100d2c9b0(undefined8 *param_1,undefined8 param_2)

{
  QDomNode local_20 [8];
  
  FUN_100d2c700();
  *param_1 = &PTR_FUN_10230f610;
  FUN_100d23bb0(local_20,param_1 + 1);
  FUN_100d23d40(local_20,param_2,param_1 + 3);
  QDomNode::~QDomNode(local_20);
  return;
}

