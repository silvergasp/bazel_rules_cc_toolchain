int main() {
  // Ensure that this var isn't optimised away.
  volatile double a = 2.0f;
  return (int)(a / 2.0f) - 1;
}