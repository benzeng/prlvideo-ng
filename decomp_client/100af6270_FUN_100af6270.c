
void FUN_100af6270(QString param_1,bool param_2)

{
  QArrayData *local_28;
  
  CBaseNode::toString(true,param_2);
  CBaseNode::fromString(param_1,true,(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

