import matplotlib.pyplot as plt

# Generate X values from -3 to 3
x_values = [x * 0.1 for x in range(-30, 31)]

# Define functions
y_even = [x**2 for x in x_values]
y_odd = [x**3 for x in x_values]

# Create Figure
plt.figure(figsize=(10, 4))

# Even Function
plt.subplot(1, 2, 1)
plt.plot(x_values, y_even, color='blue', label='$f(x)=x^2$')
plt.axhline(0, color='black', linewidth=0.5)
plt.axvline(0, color='black', linewidth=0.5)
plt.title('Even Function (Symmetric around Y-axis)')
plt.grid(True)
plt.legend()

# Odd Function
plt.subplot(1, 2, 2)
plt.plot(x_values, y_odd, color='red', label='$f(x)=x^3$')
plt.axhline(0, color='black', linewidth=0.5)
plt.axvline(0, color='black', linewidth=0.5)
plt.title('Odd Function (Symmetric around Origin)')
plt.grid(True)
plt.legend()

plt.tight_layout()
plt.show()