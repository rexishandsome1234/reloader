class servo{
  private:
  uint8_t count,servopin,button;
  public:
  uint8_t angle;
  int loop;
  void buttonpin();
  void getData();
  void write();
  int buttonstate();
}
